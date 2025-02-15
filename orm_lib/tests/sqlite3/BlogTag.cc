/**
 *
 *  BlogTag.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "BlogTag.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::sqlite3;

const std::string BlogTag::Cols::_blog_id = "blog_id";
const std::string BlogTag::Cols::_tag_id = "tag_id";
const std::vector<std::string> BlogTag::primaryKeyName = {"blog_id", "tag_id"};
const bool BlogTag::hasPrimaryKey = true;
const std::string BlogTag::tableName = "blog_tag";

const std::vector<typename BlogTag::MetaData> BlogTag::metaData_ = {
    {"blog_id", "int64_t", "integer", 8, 0, 1, 1},
    {"tag_id", "int64_t", "integer", 8, 0, 1, 1}};

const std::string &BlogTag::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}

BlogTag::BlogTag(const Row &r, const ssize_t indexOffset) noexcept
{
    if (indexOffset < 0)
    {
        if (!r["blog_id"].isNull())
        {
            blogId_ = std::make_shared<int64_t>(r["blog_id"].as<int64_t>());
        }
        if (!r["tag_id"].isNull())
        {
            tagId_ = std::make_shared<int64_t>(r["tag_id"].as<int64_t>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if (offset + 2 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if (!r[index].isNull())
        {
            blogId_ = std::make_shared<int64_t>(r[index].as<int64_t>());
        }
        index = offset + 1;
        if (!r[index].isNull())
        {
            tagId_ = std::make_shared<int64_t>(r[index].as<int64_t>());
        }
    }
}

BlogTag::BlogTag(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if (pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if (!pMasqueradingVector[0].empty() &&
        pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if (!pJson[pMasqueradingVector[0]].isNull())
        {
            blogId_ = std::make_shared<int64_t>(
                (int64_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if (!pMasqueradingVector[1].empty() &&
        pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if (!pJson[pMasqueradingVector[1]].isNull())
        {
            tagId_ = std::make_shared<int64_t>(
                (int64_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

BlogTag::BlogTag(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("blog_id"))
    {
        dirtyFlag_[0] = true;
        if (!pJson["blog_id"].isNull())
        {
            blogId_ =
                std::make_shared<int64_t>((int64_t)pJson["blog_id"].asInt64());
        }
    }
    if (pJson.isMember("tag_id"))
    {
        dirtyFlag_[1] = true;
        if (!pJson["tag_id"].isNull())
        {
            tagId_ =
                std::make_shared<int64_t>((int64_t)pJson["tag_id"].asInt64());
        }
    }
}

void BlogTag::updateByMasqueradedJson(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if (pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if (!pMasqueradingVector[0].empty() &&
        pJson.isMember(pMasqueradingVector[0]))
    {
        if (!pJson[pMasqueradingVector[0]].isNull())
        {
            blogId_ = std::make_shared<int64_t>(
                (int64_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if (!pMasqueradingVector[1].empty() &&
        pJson.isMember(pMasqueradingVector[1]))
    {
        if (!pJson[pMasqueradingVector[1]].isNull())
        {
            tagId_ = std::make_shared<int64_t>(
                (int64_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

void BlogTag::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("blog_id"))
    {
        if (!pJson["blog_id"].isNull())
        {
            blogId_ =
                std::make_shared<int64_t>((int64_t)pJson["blog_id"].asInt64());
        }
    }
    if (pJson.isMember("tag_id"))
    {
        if (!pJson["tag_id"].isNull())
        {
            tagId_ =
                std::make_shared<int64_t>((int64_t)pJson["tag_id"].asInt64());
        }
    }
}

const int64_t &BlogTag::getValueOfBlogId() const noexcept
{
    const static int64_t defaultValue = int64_t();
    if (blogId_)
        return *blogId_;
    return defaultValue;
}

const std::shared_ptr<int64_t> &BlogTag::getBlogId() const noexcept
{
    return blogId_;
}

void BlogTag::setBlogId(const int64_t &pBlogId) noexcept
{
    blogId_ = std::make_shared<int64_t>(pBlogId);
    dirtyFlag_[0] = true;
}

const int64_t &BlogTag::getValueOfTagId() const noexcept
{
    const static int64_t defaultValue = int64_t();
    if (tagId_)
        return *tagId_;
    return defaultValue;
}

const std::shared_ptr<int64_t> &BlogTag::getTagId() const noexcept
{
    return tagId_;
}

void BlogTag::setTagId(const int64_t &pTagId) noexcept
{
    tagId_ = std::make_shared<int64_t>(pTagId);
    dirtyFlag_[1] = true;
}

void BlogTag::updateId(const uint64_t id)
{
}

typename BlogTag::PrimaryKeyType BlogTag::getPrimaryKey() const
{
    return std::make_tuple(*blogId_, *tagId_);
}

const std::vector<std::string> &BlogTag::insertColumns() noexcept
{
    static const std::vector<std::string> inCols = {"blog_id", "tag_id"};
    return inCols;
}

void BlogTag::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (dirtyFlag_[0])
    {
        if (getBlogId())
        {
            binder << getValueOfBlogId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (dirtyFlag_[1])
    {
        if (getTagId())
        {
            binder << getValueOfTagId();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> BlogTag::updateColumns() const
{
    std::vector<std::string> ret;
    if (dirtyFlag_[0])
    {
        ret.push_back(getColumnName(0));
    }
    if (dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    return ret;
}

void BlogTag::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (dirtyFlag_[0])
    {
        if (getBlogId())
        {
            binder << getValueOfBlogId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (dirtyFlag_[1])
    {
        if (getTagId())
        {
            binder << getValueOfTagId();
        }
        else
        {
            binder << nullptr;
        }
    }
}

Json::Value BlogTag::toJson() const
{
    Json::Value ret;
    if (getBlogId())
    {
        ret["blog_id"] = (Json::Int64)getValueOfBlogId();
    }
    else
    {
        ret["blog_id"] = Json::Value();
    }
    if (getTagId())
    {
        ret["tag_id"] = (Json::Int64)getValueOfTagId();
    }
    else
    {
        ret["tag_id"] = Json::Value();
    }
    return ret;
}

Json::Value BlogTag::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if (pMasqueradingVector.size() == 2)
    {
        if (!pMasqueradingVector[0].empty())
        {
            if (getBlogId())
            {
                ret[pMasqueradingVector[0]] = (Json::Int64)getValueOfBlogId();
            }
            else
            {
                ret[pMasqueradingVector[0]] = Json::Value();
            }
        }
        if (!pMasqueradingVector[1].empty())
        {
            if (getTagId())
            {
                ret[pMasqueradingVector[1]] = (Json::Int64)getValueOfTagId();
            }
            else
            {
                ret[pMasqueradingVector[1]] = Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if (getBlogId())
    {
        ret["blog_id"] = (Json::Int64)getValueOfBlogId();
    }
    else
    {
        ret["blog_id"] = Json::Value();
    }
    if (getTagId())
    {
        ret["tag_id"] = (Json::Int64)getValueOfTagId();
    }
    else
    {
        ret["tag_id"] = Json::Value();
    }
    return ret;
}

bool BlogTag::validateJsonForCreation(const Json::Value &pJson,
                                      std::string &err)
{
    if (pJson.isMember("blog_id"))
    {
        if (!validJsonOfField(0, "blog_id", pJson["blog_id"], err, true))
            return false;
    }
    else
    {
        err = "The blog_id column cannot be null";
        return false;
    }
    if (pJson.isMember("tag_id"))
    {
        if (!validJsonOfField(1, "tag_id", pJson["tag_id"], err, true))
            return false;
    }
    else
    {
        err = "The tag_id column cannot be null";
        return false;
    }
    return true;
}

bool BlogTag::validateMasqueradedJsonForCreation(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector,
    std::string &err)
{
    if (pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try
    {
        if (!pMasqueradingVector[0].empty())
        {
            if (pJson.isMember(pMasqueradingVector[0]))
            {
                if (!validJsonOfField(0,
                                      pMasqueradingVector[0],
                                      pJson[pMasqueradingVector[0]],
                                      err,
                                      true))
                    return false;
            }
            else
            {
                err =
                    "The " + pMasqueradingVector[0] + " column cannot be null";
                return false;
            }
        }
        if (!pMasqueradingVector[1].empty())
        {
            if (pJson.isMember(pMasqueradingVector[1]))
            {
                if (!validJsonOfField(1,
                                      pMasqueradingVector[1],
                                      pJson[pMasqueradingVector[1]],
                                      err,
                                      true))
                    return false;
            }
            else
            {
                err =
                    "The " + pMasqueradingVector[1] + " column cannot be null";
                return false;
            }
        }
    }
    catch (const Json::LogicError &e)
    {
        err = e.what();
        return false;
    }
    return true;
}

bool BlogTag::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if (pJson.isMember("blog_id"))
    {
        if (!validJsonOfField(0, "blog_id", pJson["blog_id"], err, false))
            return false;
    }
    else
    {
        err =
            "The value of primary key must be set in the json object for "
            "update";
        return false;
    }
    if (pJson.isMember("tag_id"))
    {
        if (!validJsonOfField(1, "tag_id", pJson["tag_id"], err, false))
            return false;
    }
    else
    {
        err =
            "The value of primary key must be set in the json object for "
            "update";
        return false;
    }
    return true;
}

bool BlogTag::validateMasqueradedJsonForUpdate(
    const Json::Value &pJson,
    const std::vector<std::string> &pMasqueradingVector,
    std::string &err)
{
    if (pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try
    {
        if (!pMasqueradingVector[0].empty() &&
            pJson.isMember(pMasqueradingVector[0]))
        {
            if (!validJsonOfField(0,
                                  pMasqueradingVector[0],
                                  pJson[pMasqueradingVector[0]],
                                  err,
                                  false))
                return false;
        }
        else
        {
            err =
                "The value of primary key must be set in the json object for "
                "update";
            return false;
        }
        if (!pMasqueradingVector[1].empty() &&
            pJson.isMember(pMasqueradingVector[1]))
        {
            if (!validJsonOfField(1,
                                  pMasqueradingVector[1],
                                  pJson[pMasqueradingVector[1]],
                                  err,
                                  false))
                return false;
        }
        else
        {
            err =
                "The value of primary key must be set in the json object for "
                "update";
            return false;
        }
    }
    catch (const Json::LogicError &e)
    {
        err = e.what();
        return false;
    }
    return true;
}

bool BlogTag::validJsonOfField(size_t index,
                               const std::string &fieldName,
                               const Json::Value &pJson,
                               std::string &err,
                               bool isForCreation)
{
    switch (index)
    {
        case 0:
            if (pJson.isNull())
            {
                err = "The " + fieldName + " column cannot be null";
                return false;
            }
            if (!pJson.isInt64())
            {
                err = "Type error in the " + fieldName + " field";
                return false;
            }
            break;
        case 1:
            if (pJson.isNull())
            {
                err = "The " + fieldName + " column cannot be null";
                return false;
            }
            if (!pJson.isInt64())
            {
                err = "Type error in the " + fieldName + " field";
                return false;
            }
            break;
        default:
            err = "Internal error in the server";
            return false;
    }
    return true;
}
