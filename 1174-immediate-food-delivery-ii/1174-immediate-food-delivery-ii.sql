# Write your MySQL query statement below
-- select customer_id, order_date,
-- row_number() over (partition by customer_id order by order_date) as seq_num
-- from Delivery;

with temp as (
    select customer_id, order_date, customer_pref_delivery_date,
    row_number() over (partition by customer_id order by order_date) as seq_num
    from Delivery
), 
temp2 as (
    select customer_id, order_date, customer_pref_delivery_date,
    case when order_date = customer_pref_delivery_date then 1 else 0 end as del_mode
    from temp where seq_num = 1
)
select round(sum(del_mode)*100/count(del_mode),2) as immediate_percentage from temp2;