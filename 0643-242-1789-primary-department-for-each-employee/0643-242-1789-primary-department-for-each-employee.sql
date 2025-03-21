# Write your MySQL query statement below
with cte as (
    select *, dense_rank() over (partition by employee_id order by primary_flag) as erank
    from Employee
)
select employee_id, department_id from cte where erank = 1;