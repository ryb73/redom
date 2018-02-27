type t;

external search : t => string = "" [@@bs.get];

external href : t => string = "" [@@bs.get];
external setHref : t => string => unit = "href" [@@bs.set];