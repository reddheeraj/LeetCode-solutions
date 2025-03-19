# Write your MySQL query statement below
-- select v.customer_id, t.transaction_id,
-- sum(count(v.customer_id)) over(partition by v.customer_id) as count_no_trans
-- from Visits as v
-- inner join Transactions as t
-- on v.visit_id = t.visit_id;
-- with cte1 as (
--     select customer_id,
--     case when 
--         transaction_id is NULL THEN 1 ELSE 0 
--     END as count_no_trans 
--     from Visits v
--     left join Transactions t
--     on v.visit_id = t.visit_id
--     where transaction_id is NULL
-- )
-- select customer_id, sum(count_no_trans) as count_no_trans
-- from cte1 group by customer_id;

with cte as (
select customer_id, transaction_id,
case when transaction_id is Null then 1 else 0
end as count_no_trans
from Visits v
left join Transactions t
on v.visit_id = t.visit_id
where transaction_id is Null
)
select customer_id, sum(count_no_trans) as count_no_trans from cte
group by customer_id;