# Write your MySQL query statement below
-- select contest_id, 
-- round(count(u.user_id) * 100/(select count(user_id) from Users), 2) as percentage
-- from Users as u
-- right join Register as r
-- on u.user_id = r.user_id
-- group by contest_id
-- order by percentage desc, contest_id asc;

select r.contest_id, 
ROUND(count(u.user_id)* 100/(select count(*) from Users), 2) as percentage
from Users u 
right join Register r
on u.user_id = r.user_id
group by contest_id 
order by percentage desc, contest_id asc
;