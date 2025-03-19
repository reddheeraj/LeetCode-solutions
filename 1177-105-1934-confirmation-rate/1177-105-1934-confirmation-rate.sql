# Write your MySQL query statement below
-- select distinct s.user_id, 
-- round((sum(case when action = 'confirmed' then 1 else 0 end) over(partition by s.user_id))/(count(*) over (partition by s.user_id)), 2)
-- as confirmation_rate
-- from Signups as s
-- left join Confirmations as c
-- on s.user_id = c.user_id
-- order by confirmation_rate;

select distinct s.user_id, round(sum(case when action = 'confirmed' then 1 else 0 end) over (partition by s.user_id)/(count(*) over (partition by s.user_id)), 2) as confirmation_rate
from Signups s
left join Confirmations c
on s.user_id = c.user_id;