type t;
let location: t;
let search: (~location: t=?, unit) => string;
let href: (~location: t=?, unit) => string;
let setHref: (~location: t=?, string) => unit;
let hash: (~location: t=?, unit) => string;
