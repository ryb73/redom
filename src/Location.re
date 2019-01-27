type t;

[@bs.val] external location: t = "";
let wrap = (f) => (~location=location) => f(location);
let wrapU = (f) => (~location=location, ()) => f(location);

[@bs.get] external protocol: t => string = "";
[@bs.get] external host: t => string = "";
[@bs.get] external hostname: t => string = "";
[@bs.get] external port: t => string = "";
[@bs.get] external pathname: t => string = "";
[@bs.get] external search: t => string = "";
[@bs.get] external hash: t => string = "";
[@bs.get] external origin: t => string = "";

[@bs.get] external username: t => Js.nullable(string) = "";
[@bs.get] external password: t => Js.nullable(string) = "";
let username = (l) => username(l) |> Js.Nullable.toOption;
let password = (l) => password(l) |> Js.Nullable.toOption;

[@bs.get] external href: t => string = "";
[@bs.set] external setHref: (t, string) => unit = "href";


let protocol = wrapU(protocol);
let host = wrapU(host);
let hostname = wrapU(hostname);
let port = wrapU(port);
let pathname = wrapU(pathname);
let search = wrapU(search);
let hash = wrapU(hash);
let username = wrapU(username);
let password = wrapU(password);
let origin = wrapU(origin);
let href = wrapU(href);
let setHref = wrap(setHref);
