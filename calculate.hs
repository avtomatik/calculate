calculate :: Int -> Int -> Int
calculate bottom top = sum $ filter even [bottom..top]