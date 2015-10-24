import System.Environment

main = do
    args <- getArgs

    case args of
        [aString] ->
            print $ prime_factors (read (head args))
        _ ->
            putStrLn "Please provide a number to factorize"

prime_factors n =
    case factors of
        [] -> [n]
        _  -> factors ++ prime_factors (n `div` (head factors))
    where factors = take 1 $ filter (\x -> (n `mod` x) == 0) [2 .. n-1]
