# Write your MySQL query statement below
-- select e.name from Employee as e
-- inner join Employee as e2
-- on e.id = e2.managerId
-- group by e.id, e.name
-- having count(e.id) >= 5
-- ;

select e.name
from Employee as e
inner join Employee as e2
on e.id = e2.managerId
group by e.id, e.name
having count(e2.managerId) >= 5;