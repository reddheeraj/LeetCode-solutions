# Write your MySQL query statement below

-- with temp as (
--     select distinct a.player_id, a.event_date
--     from Activity as a
--     inner join Activity as a2
--     on a.player_id = a2.player_id
--     where DATEDIFF(a.event_date, a2.event_date) = 1
--     order by a.player_id, a.event_date
-- ),
-- temp2 as (
--     select count(player_id) as consecutive_player,
--     (select count(distinct player_id) from Activity) as total_player
--     from temp
-- )
-- select round(consecutive_player/total_player,2) as fraction from temp2;
-- SELECT 
-- round(count(Distinct player_id)/(select count(distinct player_id) from Activity),2)
-- as fraction from Activity
-- where (player_id, DATE_SUB(event_date, INTERVAL 1 DAY)) in (
-- SELECT player_id, MIN(event_date) AS first_login FROM Activity GROUP BY player_id);

with first_login as (
    select player_id, min(event_date) as first_login_date
    from Activity
    group by player_id  
),
cte as (
    select distinct a.player_id
    from first_login f
    inner join Activity a
    on f.player_id = a.player_id
    where DATEDIFF(a.event_date, f.first_login_date) = 1
),
cte2 as (
    select count(player_id) as conseq_player,
    (select count(distinct player_id) from Activity) as total_player
    from cte
)
select round(conseq_player/total_player,2) as fraction from cte2;
-- select * from cte;




