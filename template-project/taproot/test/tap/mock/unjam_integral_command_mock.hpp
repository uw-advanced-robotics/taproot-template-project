/*****************************************************************************/
/********** !!! WARNING: CODE GENERATED BY TAPROOT. DO NOT EDIT !!! **********/
/*****************************************************************************/

/*
 * Copyright (c) 2022 Advanced Robotics at the University of Washington <robomstr@uw.edu>
 *
 * This file is part of Taproot.
 *
 * Taproot is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Taproot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Taproot.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TAPROOT_UNJAM_INTEGRAL_COMMAND_MOCK_HPP_
#define TAPROOT_UNJAM_INTEGRAL_COMMAND_MOCK_HPP_

#include <gmock/gmock.h>

#include "tap/control/setpoint/commands/unjam_integral_command.hpp"

namespace tap::mock
{
class UnjamIntegralCommandMock : public tap::control::setpoint::UnjamIntegralCommand
{
public:
    static constexpr tap::control::setpoint::UnjamIntegralCommand::Config DEFAULT_CONFIG = {
        1,
        1,
        1001,
        1};

    UnjamIntegralCommandMock(
        tap::control::setpoint::IntegrableSetpointSubsystem& integrableSetpointSubsystem,
        const tap::control::setpoint::UnjamIntegralCommand::Config& config = DEFAULT_CONFIG);
    virtual ~UnjamIntegralCommandMock();

    MOCK_METHOD(
        control::subsystem_scheduler_bitmap_t,
        getRequirementsBitwise,
        (),
        (const override));
    MOCK_METHOD(void, addSubsystemRequirement, (control::Subsystem*), (override));
    MOCK_METHOD(const char*, getName, (), (const override));
    MOCK_METHOD(bool, isReady, (), (override));
    MOCK_METHOD(void, initialize, (), (override));
    MOCK_METHOD(void, execute, (), (override));
    MOCK_METHOD(void, end, (bool interrupted), (override));
    MOCK_METHOD(bool, isFinished, (), (const override));
};
}  // namespace tap::mock

#endif  // TAPROOT_UNJAM_INTEGRAL_COMMAND_MOCK_HPP_
