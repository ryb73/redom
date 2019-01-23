type t = ReDomTypes.window;
type listener;

let window: t;

let alert: (~window: t=?, string) => unit;
let close: (~window: t=?, unit) => unit;
let onLoad: (~window: t=?, LoadEvent.t => unit) => unit;
let onMessage: (~window: t=?, MessageEvent.t => unit) => listener;
let open_: (~window: t=?, ~name: string=?, string) => option(t);
let opener: (~window: t=?, unit) => option(t);
let parent: (~window: t=?, unit) => t;
let postMessage: (~window: t=?, Js.Json.t, string) => unit;
let prompt: (~window: t=?, ~message: string=?, ~default: string=?, unit) => option(string);
let removeMessageListener: (~window: t=?, listener) => unit;
let set: (~window: t=?, Js.Dict.key, _) => unit;
