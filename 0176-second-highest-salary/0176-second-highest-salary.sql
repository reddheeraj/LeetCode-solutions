# Write your MySQL query statement below
with sal as (
select distinct(salary) as salary,
DENSE_RANK() over (order by salary desc) sal_rank
from Employee
)
select max(salary) as SecondHighestSalary
from sal
where sal_rank = 2;