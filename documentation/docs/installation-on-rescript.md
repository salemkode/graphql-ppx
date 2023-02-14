---
title: Installation on Bucklescript
---

First, add it to you dependencies using `npm` or `yarn`:

```sh
yarn add @salemkode/graphql-ppx --dev
# or
npm install @salemkode/graphql-ppx --saveDev
```

Second, add it to `ppx-flags` and `dependencies` in your `bsconfig.json`:

```json
"bs-dependencies": [
  "@salemkode/graphql-ppx"
],
"ppx-flags": ["@salemkode/graphql-ppx/ppx"]
```
