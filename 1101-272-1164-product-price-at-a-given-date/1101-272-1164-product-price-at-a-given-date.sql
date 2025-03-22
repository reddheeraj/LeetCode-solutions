# Write your MySQL query statement below

select p.product_id, 
COALESCE(
    (select new_price from Products
    where product_id = p.product_id AND change_date <= '2019-08-16'
    order by change_date desc LIMIT 1)
    , 10) as price
from (select distinct product_id from Products) p; 