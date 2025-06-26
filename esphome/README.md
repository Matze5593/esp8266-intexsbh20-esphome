# ESPHome configuration (experimental)

This folder contains a minimal example to use the original firmware with [ESPHome](https://esphome.io/).
It wraps the `PureSpaIO` class in a small custom component so that ESPHome can
handle setup and loop calls. The configuration was tested with a `D1 mini` board
and should be considered experimental.

1. Copy `intexsbh20.yaml` and adjust your Wi-Fi credentials.
2. Compile and upload with ESPHome:

```bash
esphome run intexsbh20.yaml
```

The component currently exposes no sensors or switches, but it shows how the
original code can be embedded in ESPHome.
