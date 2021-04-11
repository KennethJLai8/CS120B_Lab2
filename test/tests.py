


tests = [ {'description': 'PINA: 0x00 => PORTC: 0x04',   # no spots filled
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x04)],
    },
    {'description': 'PINA: 0x0F => PORTC: 0x00',# all spots filled
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },
    {'description': 'PINA: 0x0A => PORTC: 0x02',#A1 and A3 filled
    'steps': [ {'inputs': [('PINA',0x0A)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
    {'description': 'PINA: 0x0E => PORTC: 0x01',#A1, A2, A3 filled
    'steps': [ {'inputs': [('PINA',0x0E)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
    {'description': 'PINA: 0x05 => PORTC: 0x02',#A0 and A2 filled
    'steps': [ {'inputs': [('PINA',0x05)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },

    ]
#watch = ['PORTB']



#watch = ['<function>::<static-var>','PORTB']

