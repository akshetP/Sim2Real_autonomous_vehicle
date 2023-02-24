// Auto-generated. Do not edit!

// (in-package duckietown_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class FSMState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.state = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type FSMState
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [state]
    bufferOffset = _serializer.string(obj.state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type FSMState
    let len;
    let data = new FSMState(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [state]
    data.state = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += _getByteLength(object.state);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'duckietown_msgs/FSMState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7358237ec6ffa8d862869f9b95659ac9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    string state
    
    # pseudo constants
    string LANE_FOLLOWING="LANE_FOLLOWING"
    string COORDINATION="COORDINATION"	
    string INTERSECTION_CONTROL="INTERSECTION_CONTROL"
    string JOYSTICK_CONTROL="JOYSTICK_CONTROL"
    string VEHICLE_AVOIDANCE="VEHICLE_AVOIDANCE"
    string OBSTACLE_AVOID="OBSTACLE_AVOID"
    
    #List of states
    # LANE_FOLLOWING
    # COORDINATION	
    # INTERSECTION_CONTROL
    # JOYSTICK_CONTROL
    # VEHICLE_AVOIDANCE
    # OBSTACLE_AVOID
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new FSMState(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.state !== undefined) {
      resolved.state = msg.state;
    }
    else {
      resolved.state = ''
    }

    return resolved;
    }
};

// Constants for message
FSMState.Constants = {
  LANE_FOLLOWING: '"LANE_FOLLOWING"',
  COORDINATION: '"COORDINATION"',
  INTERSECTION_CONTROL: '"INTERSECTION_CONTROL"',
  JOYSTICK_CONTROL: '"JOYSTICK_CONTROL"',
  VEHICLE_AVOIDANCE: '"VEHICLE_AVOIDANCE"',
  OBSTACLE_AVOID: '"OBSTACLE_AVOID"',
}

module.exports = FSMState;