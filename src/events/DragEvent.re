type t = {.
  "screenX": int,
  "screenY": int,
  "clientX": int,
  "clientY": int
};
external unsafeCast : _ => t = "%identity";
