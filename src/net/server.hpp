/*
 * File: server.hpp
 * Project: net
 * File Created: 2024-11-05
 * Author: xiaoma20082008 (mmccxx2519@gmail.com)
 *
 * ------------------------------------------------------------------------
 * Last Modified At: 2024-11-05 22:13:12
 * Last Modified By: xiaoma20082008 (mmccxx2519@gmail.com>)
 * ------------------------------------------------------------------------
 *
 * Copyright (C) xiaoma20082008. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include "net/server_params.hpp"

class Server
{
 private:
  ServerParams params_;

 public:
  Server(const ServerParams& params) : params_(params)
  {
  }
  virtual ~Server() {};

  virtual int startup() = 0;
  virtual int shutdown() = 0;
};

class CliServer : public Server
{
 private:
  /* data */
 public:
  CliServer(const ServerParams& params);
  ~CliServer() override;

  int startup() override;
  int shutdown() override;
};

class NetServer : public Server
{
 private:
  /* data */
 public:
  NetServer(const ServerParams& params);
  ~NetServer() override;

  int startup() override;
  int shutdown() override;
};
