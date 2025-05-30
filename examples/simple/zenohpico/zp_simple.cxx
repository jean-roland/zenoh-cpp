//
// Copyright (c) 2022 ZettaScale Technology
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
// which is available at https://www.apache.org/licenses/LICENSE-2.0.
//
// SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
//
// Contributors:
//   ZettaScale Zenoh Team, <zenoh@zettascale.tech>
//
#include <iostream>

#include "zenoh.hxx"
using namespace zenoh;

int main(int, char **) {
    Config config = Config::create_default();
    auto session = Session::open(std::move(config));
#if Z_FEATURE_PUBLICATION == 1  // check if zenoh-pico is compliled with publication support
    session.put("demo/example/simple", "Simple!");
#endif
}
