type t;
let make: (~base: string=?, string) => t;

let hash: t => string;
let host: t => string;
let hostname: t => string;
let href: t => string;
let password: t => string;
let pathname: t => string;
let port: t => string;
let protocol: t => string;
let search: t => string;
let username: t => string;

let setHash: (t, string) => unit;
let setHost: (t, string) => unit;
let setHostname: (t, string) => unit;
let setHref: (t, string) => unit;
let setPassword: (t, string) => unit;
let setPathname: (t, string) => unit;
let setPort: (t, string) => unit;
let setProtocol: (t, string) => unit;
let setSearch: (t, string) => unit;
let setUsername: (t, string) => unit;

let withHash: (string, t) => t;
let withHost: (string, t) => t;
let withHostname: (string, t) => t;
let withHref: (string, t) => t;
let withPassword: (string, t) => t;
let withPathname: (string, t) => t;
let withPort: (string, t) => t;
let withProtocol: (string, t) => t;
let withSearch: (string, t) => t;
let withUsername: (string, t) => t;

let origin: t => string;
