n <- data.frame(x = c(26,35,32,40,35,50),grp = rep(c("g1", "g2","g3"),each = 2),subgroup = LETTERS[1:2])
n <- reshape(n,idvar = "subgroup",timevar = "grp",direction = "wide")
row.names(n) <- n$subgroup
n <- n[ , 2:ncol(n)]
colnames(n) <- c(2001,2002,2003)
n <- as.matrix(n)
barplot(height = n,beside = TRUE)