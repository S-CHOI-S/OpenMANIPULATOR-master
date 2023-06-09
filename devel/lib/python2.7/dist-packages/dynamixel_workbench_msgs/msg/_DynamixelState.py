# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dynamixel_workbench_msgs/DynamixelState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DynamixelState(genpy.Message):
  _md5sum = "de16fe707b0f52dae3981fe25709b978"
  _type = "dynamixel_workbench_msgs/DynamixelState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message includes basic data of dynamixel

string name
uint8  id

int32  present_position
int32  present_velocity
int16  present_current

## ADD
int16  position_p_gain
"""
  __slots__ = ['name','id','present_position','present_velocity','present_current','position_p_gain']
  _slot_types = ['string','uint8','int32','int32','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       name,id,present_position,present_velocity,present_current,position_p_gain

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DynamixelState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.name is None:
        self.name = ''
      if self.id is None:
        self.id = 0
      if self.present_position is None:
        self.present_position = 0
      if self.present_velocity is None:
        self.present_velocity = 0
      if self.present_current is None:
        self.present_current = 0
      if self.position_p_gain is None:
        self.position_p_gain = 0
    else:
      self.name = ''
      self.id = 0
      self.present_position = 0
      self.present_velocity = 0
      self.present_current = 0
      self.position_p_gain = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_B2i2h().pack(_x.id, _x.present_position, _x.present_velocity, _x.present_current, _x.position_p_gain))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      _x = self
      start = end
      end += 13
      (_x.id, _x.present_position, _x.present_velocity, _x.present_current, _x.position_p_gain,) = _get_struct_B2i2h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_B2i2h().pack(_x.id, _x.present_position, _x.present_velocity, _x.present_current, _x.position_p_gain))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      _x = self
      start = end
      end += 13
      (_x.id, _x.present_position, _x.present_velocity, _x.present_current, _x.position_p_gain,) = _get_struct_B2i2h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B2i2h = None
def _get_struct_B2i2h():
    global _struct_B2i2h
    if _struct_B2i2h is None:
        _struct_B2i2h = struct.Struct("<B2i2h")
    return _struct_B2i2h
