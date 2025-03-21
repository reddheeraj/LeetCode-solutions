# Write your MySQL query statement below
-- select DATE_FORMAT(trans_date, '%Y-%m') as month, country,
-- count(state) as trans_count,
-- sum(case when state = 'approved' then 1 else 0 end) as approved_count,
-- sum(amount) as trans_total_amount,
-- sum((state = 'approved') * amount) as approved_total_amount
-- from Transactions
-- group by month, country;

select DATE_FORMAT(trans_date, "%Y-%m") as month, country,
count(*) as trans_count,
sum(case when state = 'approved' then 1 else 0 end) as approved_count,
sum(amount) as trans_total_amount,
sum((state = 'approved') * amount) as approved_total_amount 
from Transactions
group by month, country;