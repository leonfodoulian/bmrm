% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/loss_core.R
\name{is.convex}
\alias{is.convex}
\alias{is.convex<-}
\alias{is.convex.default}
\alias{is.convex<-}
\alias{is.convex<-.default}
\title{Return or set is.convex attribute}
\usage{
is.convex(x, ...)

\method{is.convex}{default}(x, ...)

is.convex(x, ...) <- value

\method{is.convex}{default}(x, ...) <- value
}
\arguments{
\item{x}{any R object}

\item{...}{additional paramters}

\item{value}{new loss value to set}
}
\value{
attr(x,"is.convex")
}
\description{
Return or set is.convex attribute
}
\details{
is.convex attribute is used by loss/risk function to determine if it is convex
}
