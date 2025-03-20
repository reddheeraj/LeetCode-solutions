# Write your MySQL query statement below
-- select p.project_id, round(avg(experience_years), 2) as average_years
-- from Project as p
-- left join Employee as e
-- on p.employee_id = e.employee_id
-- group by project_id
-- order by project_id;

select p.project_id,
round(AVG(experience_years), 2) as average_years
from Project p
left join Employee e
on p.employee_id = e.employee_id
group by p.project_id;