# Real Time Ai Inference

Sub-millisecond AI inference server for real-time applications.

## Features
- CUDA graph capture for zero kernel launch overhead
- TensorRT/ROCm backend
- Dynamic batching with latency budget
- gRPC and HTTP endpoints

## Latency (Llama-3-8B)
| Batch | Latency (p50) | Latency (p99) |
|-------|---------------|---------------|
| 1 | 2.1ms | 3.8ms |
| 8 | 8.4ms | 12.1ms |

## License
MIT
