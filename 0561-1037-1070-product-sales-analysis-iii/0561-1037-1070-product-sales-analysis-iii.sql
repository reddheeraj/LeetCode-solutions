# Write your MySQL query statement below
-- select s.product_id, min(year) as first_year, quantity, price
-- from Sales s
-- INNER JOIN Product p
-- where s.product_id = p.product_id
-- group by s.product_id;

-- with ranks as (
--     select *, rank() over (partition by product_id order by year) as rank_order
--     from Sales
-- )
-- select r.product_id, year as first_year, quantity, price
-- from ranks r
-- INNER JOIN Product p
-- on r.product_id = p.product_id
-- where rank_order = 1;

with ranks as (
    select product_id, year, quantity, price,
    rank() over (partition by product_id order by year) as year_rank
    from Sales
)
select product_id, year as first_year, quantity, price
from ranks where year_rank = 1;





