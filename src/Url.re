type t;

[@bs.new] external make: (~url: string) => (~base: string=?) => t = "URL";
let make = (~base=?, url) => make(~url, ~base?);

[@bs.get] external hash: t => string = "hash";
[@bs.get] external host: t => string = "host";
[@bs.get] external hostname: t => string = "hostname";
[@bs.get] external href: t => string = "href";
[@bs.get] external password: t => string = "password";
[@bs.get] external pathname: t => string = "pathname";
[@bs.get] external port: t => string = "port";
[@bs.get] external protocol: t => string = "protocol";
[@bs.get] external search: t => string = "search";
[@bs.get] external username: t => string = "username";

[@bs.set] external setHash: t => string => unit = "hash";
[@bs.set] external setHost: t => string => unit = "host";
[@bs.set] external setHostname: t => string => unit = "hostname";
[@bs.set] external setHref: t => string => unit = "href";
[@bs.set] external setPassword: t => string => unit = "password";
[@bs.set] external setPathname: t => string => unit = "pathname";
[@bs.set] external setPort: t => string => unit = "port";
[@bs.set] external setProtocol: t => string => unit = "protocol";
[@bs.set] external setSearch: t => string => unit = "search";
[@bs.set] external setUsername: t => string => unit = "username";

let immutable = (f) =>
    (v, url) => {
        let newUrl = href(url) |> make;
        f(newUrl, v);
        newUrl;
    };

let withHash = immutable(setHash);
let withHost = immutable(setHost);
let withHostname = immutable(setHostname);
let withHref = immutable(setHref);
let withPassword = immutable(setPassword);
let withPathname = immutable(setPathname);
let withPort = immutable(setPort);
let withProtocol = immutable(setProtocol);
let withSearch = immutable(setSearch);
let withUsername =  immutable(setUsername);

[@bs.get] external origin: t => string = "hash";
