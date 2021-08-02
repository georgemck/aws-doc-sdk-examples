# AWS SDK for Rust code examples for Amazon S3

Amazon Simple Storage Service (Amazon S3) is storage for the internet. You can use Amazon S3 to store and retrieve any amount of data at any time, from anywhere on the web.

## Purpose

These examples demonstrate how to perform several Amazon S3 operations using the alpha version of the AWS SDK for Rust.

## Prerequisites

You must have an AWS account, and have configured your default credentials and AWS Region as described in [https://github.com/awslabs/aws-sdk-rust](https://github.com/awslabs/aws-sdk-rust).

## Running the code

### create-bucket

This example creates an Amazon S3 bucket in the Region.

`cargo run --bin create-bucket -- -b BUCKET [-r REGION] [-v]`

- _BUCKET_ is the name of the bucket to create.
- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### delete-object

This example deletes an object in an Amazon S3 bucket.

`cargo run --bin delete-object -- -b BUCKET -k KEY [-r REGION] [-v]`

- _BUCKET_ is the name of the bucket.
- _KEY_ is the name of the object to delete.
- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### list-buckets

This example lists your Amazon S3 buckets in the Region.

`cargo run --bin list-buckets -- [-r REGION] [-v]`

- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### list-objects

This example lists the objects in an Amazon S3 bucket.

`cargo run --bin list-objects -- -b BUCKET [-r REGION] [-v]`

- _BUCKET_ is the name of the bucket.
- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### list-object-versions

This example lists version IDs of the objects in an Amazon S3 bucket.

`cargo run --bin list-object-versions -- -b BUCKET [-r REGION] [-v]`

- _BUCKET_ is the name of the bucket.
- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### s3-helloworld

This example lists your buckets and uploads a file to a bucket.

`cargo run --bin hello-world -- -b BUCKET -k KEY [-r REGION] [-v]`

- _BUCKET_ is the name of the bucket.
- _KEY_ is the name of the file to upload to the bucket.
- _REGION_ is the Region in which the client is created.
  If not supplied, uses the value of the __AWS_REGION__ environment variable.
  If the environment variable is not set, defaults to __us-west-2__.
- __-v__ displays additional information.

### Notes

- We recommend that you grant this code least privilege,
  or at most the minimum permissions required to perform the task.
  For more information, see
  [Grant Least Privilege](https://docs.aws.amazon.com/IAM/latest/UserGuide/best-practices.html#grant-least-privilege)
  in the AWS Identity and Access Management User Guide.
- This code has not been tested in all AWS Regions.
  Some AWS services are available only in specific
  [Regions](https://aws.amazon.com/about-aws/global-infrastructure/regional-product-services).
- Running this code might result in charges to your AWS account.

Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved. SPDX-License-Identifier: Apache-2.0