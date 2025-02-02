/*
   Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
   This file is licensed under the Apache License, Version 2.0 (the "License").
   You may not use this file except in compliance with the License. A copy of
   the License is located at
    http://aws.amazon.com/apache2.0/
   This file is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied. See the License for the
   specific language governing permissions and limitations under the License.
*/

#include <aws/core/Aws.h>
#include <aws/sns/SNSClient.h>
#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/sns/model/GetSMSAttributesResult.h>
#include <iostream>

/**
 * Get the SMS type - demonstrates how to retrieve the settings for sending Amazon SMS messages.
 * 
 * For more information on SetSMSAttributes, see https://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html.
 */

int main(int argc, char ** argv)
{
  if (argc != 1)
  {
    std::cout << "Usage: get_sms_type" << std::endl;
    return 1;
  }
  // snippet-start:[sns.cpp.get_sms_type.code]
  Aws::SDKOptions options;
  Aws::InitAPI(options);
  {
    Aws::SNS::SNSClient sns;

    Aws::SNS::Model::GetSMSAttributesRequest gsmst_req;
    gsmst_req.AddAttributes("DefaultSMStype");

    auto gsmst_out = sns.GetSMSAttributes(gsmst_req);

    if (gsmst_out.IsSuccess())
    {
      std::cout << "SMS Type " << std::endl;
    }
    else
    {
      std::cout << "Error while getting SMS Type " << gsmst_out.GetError().GetMessage()
        << std::endl;
    }
  }

  Aws::ShutdownAPI(options);
  // snippet-end:[sns.cpp.get_sms_type.code]
  return 0;
}
