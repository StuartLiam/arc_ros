# A hokuyolaser ranger

define hokuyolaser ranger
(
  sensor(       
    # laser-specific properties
    # factory settings for LMS200  
    range [ 0.0  5.0 ]
    fov 270.0
    samples 270
  )
  model
  (
    # generic model properties
    size [ 0.07 0.07 0.05 ] # dimensions from LMS200 data sheet  
    color "blue"
  )
)
