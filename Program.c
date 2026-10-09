npm create vite@latest golden-earning -- --template react
cd golden-earning
npm install
npm install @supabase/supabase-js lucide-react
npm run dev

VITE_SUPABASE_URL=your_supabase_project_url
VITE_SUPABASE_ANON_KEY=your_supabase_publishable_key

import { useState } from "react";
import {
  Coins, LayoutDashboard, ClipboardList, Users,
  Wallet, Hotel, BrainCircuit, Globe, Copy, Menu
} from "lucide-react";
import "./:root {
  font-family: Inter, system-ui, sans-serif;
  color: #f4f1e8;
  background: #10120f;
  font-synthesis: none;
  font-weight: 400;
}

* { box-sizing: border-box; }

body { margin: 0; min-width: 320px; }
button, input { font: inherit; }
button { cursor: pointer; }

.app { min-height: 100vh; }

.sidebar {
  position: fixed;
  inset: 0 auto 0 0;
  width: 245px;
  background: #191c16;
  padding: 26px 16px;
  border-right: 1px solid #303329;
}

.brand {
  display: flex;
  align-items: center;
  gap: 10px;
  color: #e6bd59;
  font-size: 19px;
  margin: 0 0 36px;
}

.nav {
  display: flex;
  align-items: center;
  gap: 12px;
  width: 100%;
  padding: 13px;
  border: 0;
  border-radius: 9px;
  color: #c5c7bc;
  background: yellow gradient(125deg, #76ac41, #1c2019);
  text-align: left;
  margin: 7px 0;
}

.nav.active, .nav:hover {
  background: #695409;
  color: #8eb30b;
}

.side-note {
  position: absolute;
  bottom: 22px;
  color: #8e9285;
  font-size: 12px;
}

.main {
  margin-left: 245px;
  padding: 30px;
  max-width: 1500px;
}

.topbar {
  display: flex;
  align-items: center;
  gap: 15px;
  margin-bottom: 28px;
}

.topbar p, .hero p, .stat p, .task p, .panel p {
  color: #a9ad9f;
  font-size: 14px;
}

.topbar p { margin-bottom: 0; }
.pill {
  margin-left: auto;
  padding: 8px 12px;
  border: 1px solid #484735;
  border-radius: 30px;
  color: #e6bd59;
  font-size: 12px;
}

.hero, .stat, .task, .panel {
  background: #1c2019;
  border: 1px solid #34382d;
  border-radius: 16px;
  padding: 22px;
}

.hero {
  background: linear-gradient(125deg, #34301f, #1b2018);
}

.hero h1 {
  color: #f1cb67;
  font-size: clamp(28px, 4vw, 42px);
  margin: 12px 0;
}

.stats {
  display: grid;
  grid-template-columns: repeat(3, minmax(0, 1fr));
  gap: 16px;
  margin: 20px 0 32px;
}

.stat h2 { font-size: 22px; }

.section-title { margin: 25px 0 18px; }

.tasks {
  display: grid;
  grid-template-columns: repeat(2, minmax(0, 1fr));
  gap: 16px;
  margin-bottom: 22px;
}

.task-icon {
  display: inline-flex;
  padding: 12px;
  border-radius: 10px;
  color: #f0cd70;
  background: #463807;
}

.task h3 { margin-bottom: 8px; }

.primary, .secondary {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  gap: 8px;
  padding: 12px 16px;
  border-radius: 9px;
  font-weight: 600;
}

.primary {
  background: #e5bd59;
  color: #17170f;
  border: 0;
}

.secondary {
  background: transparent;
  color: #e5bd59;
  border: 1px solid #71613b;
}

.panel { max-width: 620px; }
.panel form { display: grid; gap: 12px; }
.panel label { font-size: 14px; margin-top: 10px; }

input {
  width: 100%;
  padding: 13px;
  border-radius: 8px;
  border: 1px solid #45493d;
  background: #11140f;
  color: white;
}

.notice {
  color: #e5bd59;
  font-size: 14px;
  line-height: 1.6;
}

.menu { display: none; }

@media (max-width: 850px) {
  .sidebar {
    display: none;
    z-index: 2;
    box-shadow: 0 10px 40px #0008;
  }
  .sidebar.open { display: block; }
  .main { margin-left: 0; padding: 18px; }
  .menu {
    display: inline-flex;
    background: transparent;
    border: 0;
    color: white;
  }
  .stats { grid-template-columns: 1fr; }
  .tasks { grid-template-columns: 1fr; }
  .stat h2 { font-size: 20px; }
}";
activation: "npm run dev" 90 
{
  "info": {
    "_postman_id": "21f972ff-40aa-439e-a906-e52cff4bcf63",
    "name": "Safaricom APIs",
    "description": "# Introduction\nWhat does your API do?\n\n# Overview\nThings that the developers should know about\n\n# Authentication\nWhat is the preferred way of using the API?\n\n# Error Codes\nWhat errors and status codes can a user expect?\n\n# Rate limit\nIs there a limit to the number of requests an user can send?",
    "schema": "https://schema.getpostman.com/json/collection/v2.1.0/collection.json",
    "_exporter_id": "13728471"
  },
  "item": [
    {
      "name": "M-Pesa Ratiba - Sandbox",
      "item": [
        {
          "name": "Access Token",
          "event": [
            {
              "listen": "test",
              "script": {
                "exec": [
                  ""
                ],
                "type": "text/javascript",
                "packages": {}
              }
            }
          ],
          "request": {
            "auth": {
              "type": "basic",
              "basic": [
                {
                  "key": "password",
                  "value": "",
                  "type": "string"
                },
                {
                  "key": "username",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "GET",
            "header": [],
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "oauth",
                "v1",
                "generate"
              ],
              "query": [
                {
                  "key": "grant_type",
                  "value": "client_credentials"
                }
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Paybill)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"174379\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Bill\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"4\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Buy Goods)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"300584\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Merchant\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"2\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "IoT APIS - Sandbox",
      "item": [
        {
          "name": "ms-iot-messaging",
          "item": [
            {
              "name": "search messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"searchValue\": \"test\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"eokeda@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/searchmessages?pageNo=1&pageSize=5",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "searchmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "5"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "filter messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"startDate\": \"\",\r\n    \"endDate\": \"\",\r\n    \"status\": \"\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/filtermessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "filtermessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message thread",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}\r\n",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deleteMessageThread",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deleteMessageThread"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get all messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\": \"1-555162310488_VPN\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getallmessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getallmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "send single message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"message\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/sendsinglemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "sendsinglemessage"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"id\": 0,\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deletemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deletemessage"
                  ]
                }
              },
              "response": []
            }
          ]
        },
        {
          "name": "sim-operations",
          "item": [
            {
              "name": "all sims",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n   \"vpnGroup\":[\"1-555162310488_VPN\"],\r\n   \"startAtIndex\":\"0\",\r\n   \"pageSize\":\"0\",\r\n   \"username\":\"darajasandbox@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/allsims",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "allsims"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query lifecycle status",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/queryLifeCycleStatus",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "queryLifeCycleStatus"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query customer info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/querycustomerinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "querycustomerinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "sim activation",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n     \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/simactivation",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "simactivation"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get activation trends",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\":\"\",\r\n    \"startDate\":\"\",\r\n    \"stopDate\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getactivationtrends",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getactivationtrends"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "rename asset",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\",\r\n    \"assetName\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/renameasset",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "renameasset"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get location info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getlocationinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getlocationinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "suspend unsuspend sub",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  },
                  {
                    "key": "Content-Type",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationId",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "Accept",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Identity",
                    "value": "mjepkoech@safaricom.co.ke",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"username\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"product\":\"\",\r\n    \"operation\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/suspend_unsuspend_sub",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "suspend_unsuspend_sub"
                  ]
                }
              },
              "response": []
            }
          ]
        }
      ]
    },
    {
      "name": "IMSI",
      "item": [
        {
          "name": "IMSI V1 - CheckATI",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        },
        {
          "name": "IMSI V2 - Lookup",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi-lookup/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi-lookup",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "Age On Network",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"customerNumber\": \"\"\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/registration/lookup/v1/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "registration",
            "lookup",
            "v1",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2B Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"SenderIdentifierType\": \"\",\r\n    \"RecieverIdentifierType\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"AccountReference\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2b/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2b",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Reverse an M-Pesa Transaction",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"TransactionReversal\",\r\n    \"TransactionID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"ReceiverParty\": \"\",\r\n    \"RecieverIdentifierType\": \"4\",\r\n    \"ResultURL\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/reversal/v1/request",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "reversal",
            "v1",
            "request"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the Transaction Status of an M-Pesa Transaction",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/transactionstatus/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "transactionstatus",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Simulate a C2B Payment",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\":\" \",\r\n    \"CommandID\":\"\",\r\n    \"Amount\":\" \",\r\n    \"Msisdn\":\" \",\r\n    \"BillRefNumber\":\" \"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/simulate",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "simulate"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the status of a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpushquery/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpushquery",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2C Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n  \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2Pochi Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"OriginatorConversationID\": \"\",\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Initiate a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"BusinessShortCode\": \"\",\r\n    \"Password\": \"\",\r\n    \"Timestamp\": \"\",\r\n    \"TransactionType\": \"\",\r\n    \"Amount\": 1,\r\n    \"PartyA\": 254708374149,\r\n    \"PartyB\": 174379,\r\n    \"PhoneNumber\": 254708374149,\r\n    \"CallBackURL\": \"https://mydomain.com/path\",\r\n    \"AccountReference\": \"CompanyXLTD\",\r\n    \"TransactionDesc\": \"Payment of X\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpush/v1/processrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpush",
            "v1",
            "processrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make an Account Balance query",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"AccountBalance\",\r\n    \"PartyA\": \"\",\r\n    \"IdentifierType\": \"4\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/accountbalance/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "accountbalance",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Register C2B Confirmation and Validation URLs",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"ResponseType\": \"Completed\",\r\n    \"ConfirmationURL\": \"https://mydomain.com/confirmation\",\r\n    \"ValidationURL\": \"https://mydomain.com/validation\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/registerurl",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "registerurl"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Generate an OAuth Access Token",
      "protocolProfileBehavior": {
        "disableBodyPruning": true
      },
      "request": {
        "auth": {
          "type": "basic",
          "basic": [
            {
              "key": "password",
              "value": "",
              "type": "string"
            },
            {
              "key": "username",
              "value": "",
              "type": "string"
            },
            {
              "key": "showPassword",
              "value": false,
              "type": "boolean"
            }
          ]
        },
        "method": "GET",
        "header": [],
        "body": {
          "mode": "formdata",
          "formdata": []
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "oauth",
            "v1",
            "generate"
          ],
          "query": [
            {
              "key": "grant_type",
              "value": "client_credentials"
            }
          ]
        }
      },
      "response": []
    },
    {
      "name": "SWAP CheckATI",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n\t\"customerNumber\":\"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/imsi/v2/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "imsi",
            "v2",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Register URL",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"RequestType\": \"\",\r\n    \"NominatedNumber\": \"\",\r\n    \"CallBackURL\": \"\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/register",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "register"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Query",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"StartDate\": \"2020-08-04 8:36:00\",\r\n    \"EndDate\": \"2020-08-16 10:10:000\",\r\n    \"OffSetValue\": \"0\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2B Hakikisha(Query Org Info)",
      "request": {
        "auth": {
          "type": "bearer"
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"IdentifierType\": \"\",\n    \"Identifier\": \"\"\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/sfcverify/v1/query/info",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "sfcverify",
            "v1",
            "query",
            "info"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Mobile Number Validation",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"requestRefID\": \"{{$timestamp}}\",\r\n    \"shortCode\":\"\",\r\n    \"msisdn\": \"\",\r\n    \"idType\": \"\",\r\n    \"idNumber\": \"\"\r\n} ",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/v1/KYC-validation/validateID",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "v1",
            "KYC-validation",
            "validateID"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2C Hakikisha",
      "request": {
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"header\": {\n        \"requestID\": \"\",\n        \"timestamp\": \"\"\n    },\n    \"body\": {\n        \"msisdn\": \"\",\n        \"shortcode\": \"\"\n    }\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/hakikisha/v1/hakikisha",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "hakikisha",
            "v1",
            "hakikisha"
          ]
        }
      },
      "response": []
    }
  ],
  "variable": [
    {
      "key": "access_token",
      "value": ""
    }
  ]
}
const tasks = [
  { id: 1, name: "Hotel Review", reward: 500, fee: 100 paid to{
  "info": {
    "_postman_id": "21f972ff-40aa-439e-a906-e52cff4bcf63",
    "name": "Safaricom APIs",
    "description": "# Introduction\nWhat does your API do?\n\n# Overview\nThings that the developers should know about\n\n# Authentication\nWhat is the preferred way of using the API?\n\n# Error Codes\nWhat errors and status codes can a user expect?\n\n# Rate limit\nIs there a limit to the number of requests an user can send?",
    "schema": "https://schema.getpostman.com/json/collection/v2.1.0/collection.json",
    "_exporter_id": "13728471"
  },
  "item": [
    {
      "name": "M-Pesa Ratiba - Sandbox",
      "item": [
        {
          "name": "Access Token",
          "event": [
            {
              "listen": "test",
              "script": {
                "exec": [
                  ""
                ],
                "type": "text/javascript",
                "packages": {}
              }
            }
          ],
          "request": {
            "auth": {
              "type": "basic",
              "basic": [
                {
                  "key": "password",
                  "value": "",
                  "type": "string"
                },
                {
                  "key": "username",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "GET",
            "header": [],
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "oauth",
                "v1",
                "generate"
              ],
              "query": [
                {
                  "key": "grant_type",
                  "value": "client_credentials"
                }
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Paybill)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"174379\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Bill\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"4\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Buy Goods)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"300584\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Merchant\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"2\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "IoT APIS - Sandbox",
      "item": [
        {
          "name": "ms-iot-messaging",
          "item": [
            {
              "name": "search messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"searchValue\": \"test\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"eokeda@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/searchmessages?pageNo=1&pageSize=5",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "searchmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "5"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "filter messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"startDate\": \"\",\r\n    \"endDate\": \"\",\r\n    \"status\": \"\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/filtermessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "filtermessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message thread",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}\r\n",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deleteMessageThread",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deleteMessageThread"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get all messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\": \"1-555162310488_VPN\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getallmessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getallmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "send single message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"message\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/sendsinglemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "sendsinglemessage"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"id\": 0,\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deletemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deletemessage"
                  ]
                }
              },
              "response": []
            }
          ]
        },
        {
          "name": "sim-operations",
          "item": [
            {
              "name": "all sims",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n   \"vpnGroup\":[\"1-555162310488_VPN\"],\r\n   \"startAtIndex\":\"0\",\r\n   \"pageSize\":\"0\",\r\n   \"username\":\"darajasandbox@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/allsims",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "allsims"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query lifecycle status",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/queryLifeCycleStatus",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "queryLifeCycleStatus"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query customer info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/querycustomerinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "querycustomerinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "sim activation",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n     \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/simactivation",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "simactivation"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get activation trends",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\":\"\",\r\n    \"startDate\":\"\",\r\n    \"stopDate\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getactivationtrends",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getactivationtrends"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "rename asset",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\",\r\n    \"assetName\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/renameasset",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "renameasset"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get location info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getlocationinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getlocationinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "suspend unsuspend sub",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  },
                  {
                    "key": "Content-Type",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationId",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "Accept",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Identity",
                    "value": "mjepkoech@safaricom.co.ke",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"username\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"product\":\"\",\r\n    \"operation\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/suspend_unsuspend_sub",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "suspend_unsuspend_sub"
                  ]
                }
              },
              "response": []
            }
          ]
        }
      ]
    },
    {
      "name": "IMSI",
      "item": [
        {
          "name": "IMSI V1 - CheckATI",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        },
        {
          "name": "IMSI V2 - Lookup",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi-lookup/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi-lookup",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "Age On Network",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"customerNumber\": \"\"\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/registration/lookup/v1/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "registration",
            "lookup",
            "v1",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2B Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"SenderIdentifierType\": \"\",\r\n    \"RecieverIdentifierType\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"AccountReference\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2b/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2b",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Reverse an M-Pesa Transaction",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"TransactionReversal\",\r\n    \"TransactionID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"ReceiverParty\": \"\",\r\n    \"RecieverIdentifierType\": \"4\",\r\n    \"ResultURL\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/reversal/v1/request",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "reversal",
            "v1",
            "request"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the Transaction Status of an M-Pesa Transaction",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/transactionstatus/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "transactionstatus",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Simulate a C2B Payment",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\":\" \",\r\n    \"CommandID\":\"\",\r\n    \"Amount\":\" \",\r\n    \"Msisdn\":\" \",\r\n    \"BillRefNumber\":\" \"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/simulate",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "simulate"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the status of a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpushquery/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpushquery",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2C Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n  \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2Pochi Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"OriginatorConversationID\": \"\",\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Initiate a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"BusinessShortCode\": \"\",\r\n    \"Password\": \"\",\r\n    \"Timestamp\": \"\",\r\n    \"TransactionType\": \"\",\r\n    \"Amount\": 1,\r\n    \"PartyA\": 254708374149,\r\n    \"PartyB\": 174379,\r\n    \"PhoneNumber\": 254708374149,\r\n    \"CallBackURL\": \"https://mydomain.com/path\",\r\n    \"AccountReference\": \"CompanyXLTD\",\r\n    \"TransactionDesc\": \"Payment of X\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpush/v1/processrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpush",
            "v1",
            "processrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make an Account Balance query",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"AccountBalance\",\r\n    \"PartyA\": \"\",\r\n    \"IdentifierType\": \"4\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/accountbalance/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "accountbalance",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Register C2B Confirmation and Validation URLs",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"ResponseType\": \"Completed\",\r\n    \"ConfirmationURL\": \"https://mydomain.com/confirmation\",\r\n    \"ValidationURL\": \"https://mydomain.com/validation\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/registerurl",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "registerurl"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Generate an OAuth Access Token",
      "protocolProfileBehavior": {
        "disableBodyPruning": true
      },
      "request": {
        "auth": {
          "type": "basic",
          "basic": [
            {
              "key": "password",
              "value": "",
              "type": "string"
            },
            {
              "key": "username",
              "value": "",
              "type": "string"
            },
            {
              "key": "showPassword",
              "value": false,
              "type": "boolean"
            }
          ]
        },
        "method": "GET",
        "header": [],
        "body": {
          "mode": "formdata",
          "formdata": []
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "oauth",
            "v1",
            "generate"
          ],
          "query": [
            {
              "key": "grant_type",
              "value": "client_credentials"
            }
          ]
        }
      },
      "response": []
    },
    {
      "name": "SWAP CheckATI",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n\t\"customerNumber\":\"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/imsi/v2/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "imsi",
            "v2",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Register URL",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"RequestType\": \"\",\r\n    \"NominatedNumber\": \"\",\r\n    \"CallBackURL\": \"\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/register",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "register"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Query",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"StartDate\": \"2020-08-04 8:36:00\",\r\n    \"EndDate\": \"2020-08-16 10:10:000\",\r\n    \"OffSetValue\": \"0\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2B Hakikisha(Query Org Info)",
      "request": {
        "auth": {
          "type": "bearer"
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"IdentifierType\": \"\",\n    \"Identifier\": \"\"\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/sfcverify/v1/query/info",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "sfcverify",
            "v1",
            "query",
            "info"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Mobile Number Validation",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"requestRefID\": \"{{$timestamp}}\",\r\n    \"shortCode\":\"\",\r\n    \"msisdn\": \"\",\r\n    \"idType\": \"\",\r\n    \"idNumber\": \"\"\r\n} ",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/v1/KYC-validation/validateID",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "v1",
            "KYC-validation",
            "validateID"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2C Hakikisha",
      "request": {
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"header\": {\n        \"requestID\": \"\",\n        \"timestamp\": \"\"\n    },\n    \"body\": {\n        \"msisdn\": \"\",\n        \"shortcode\": \"\"\n    }\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/hakikisha/v1/hakikisha",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "hakikisha",
            "v1",
            "hakikisha"
          ]
        }
      },
      "response": []
    }
  ],
  "variable": [
    {
      "key": "access_token",
      "value": ""
    }
  ]
},
    icon: Hotel, description: "Submit an honest, verified review."
  hotel review task.have photo},
  { id: 2, name: "Data Entry", reward: 50, fee: 0,
    icon: ClipboardList, description: "Complete an assigned data task." },
  { id: 3, name: "AI Training & Annotation", reward: 200, fee: 100 paid to {
  "info": {
    "_postman_id": "21f972ff-40aa-439e-a906-e52cff4bcf63",
    "name": "Safaricom APIs",
    "description": "# Introduction\nWhat does your API do?\n\n# Overview\nThings that the developers should know about\n\n# Authentication\nWhat is the preferred way of using the API?\n\n# Error Codes\nWhat errors and status codes can a user expect?\n\n# Rate limit\nIs there a limit to the number of requests an user can send?",
    "schema": "https://schema.getpostman.com/json/collection/v2.1.0/collection.json",
    "_exporter_id": "13728471"
  },
  "item": [
    {
      "name": "M-Pesa Ratiba - Sandbox",
      "item": [
        {
          "name": "Access Token",
          "event": [
            {
              "listen": "test",
              "script": {
                "exec": [
                  ""
                ],
                "type": "text/javascript",
                "packages": {}
              }
            }
          ],
          "request": {
            "auth": {
              "type": "basic",
              "basic": [
                {
                  "key": "password",
                  "value": "",
                  "type": "string"
                },
                {
                  "key": "username",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "GET",
            "header": [],
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "oauth",
                "v1",
                "generate"
              ],
              "query": [
                {
                  "key": "grant_type",
                  "value": "client_credentials"
                }
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Paybill)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"174379\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Bill\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"4\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Buy Goods)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"300584\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Merchant\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"2\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "IoT APIS - Sandbox",
      "item": [
        {
          "name": "ms-iot-messaging",
          "item": [
            {
              "name": "search messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"searchValue\": \"test\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"eokeda@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/searchmessages?pageNo=1&pageSize=5",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "searchmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "5"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "filter messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"startDate\": \"\",\r\n    \"endDate\": \"\",\r\n    \"status\": \"\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/filtermessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "filtermessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message thread",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}\r\n",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deleteMessageThread",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deleteMessageThread"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get all messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\": \"1-555162310488_VPN\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getallmessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getallmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "send single message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"message\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/sendsinglemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "sendsinglemessage"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"id\": 0,\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deletemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deletemessage"
                  ]
                }
              },
              "response": []
            }
          ]
        },
        {
          "name": "sim-operations",
          "item": [
            {
              "name": "all sims",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n   \"vpnGroup\":[\"1-555162310488_VPN\"],\r\n   \"startAtIndex\":\"0\",\r\n   \"pageSize\":\"0\",\r\n   \"username\":\"darajasandbox@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/allsims",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "allsims"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query lifecycle status",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/queryLifeCycleStatus",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "queryLifeCycleStatus"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query customer info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/querycustomerinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "querycustomerinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "sim activation",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n     \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/simactivation",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "simactivation"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get activation trends",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\":\"\",\r\n    \"startDate\":\"\",\r\n    \"stopDate\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getactivationtrends",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getactivationtrends"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "rename asset",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\",\r\n    \"assetName\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/renameasset",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "renameasset"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get location info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getlocationinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getlocationinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "suspend unsuspend sub",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  },
                  {
                    "key": "Content-Type",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationId",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "Accept",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Identity",
                    "value": "mjepkoech@safaricom.co.ke",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"username\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"product\":\"\",\r\n    \"operation\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/suspend_unsuspend_sub",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "suspend_unsuspend_sub"
                  ]
                }
              },
              "response": []
            }
          ]
        }
      ]
    },
    {
      "name": "IMSI",
      "item": [
        {
          "name": "IMSI V1 - CheckATI",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        },
        {
          "name": "IMSI V2 - Lookup",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi-lookup/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi-lookup",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "Age On Network",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"customerNumber\": \"\"\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/registration/lookup/v1/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "registration",
            "lookup",
            "v1",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2B Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"SenderIdentifierType\": \"\",\r\n    \"RecieverIdentifierType\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"AccountReference\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2b/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2b",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Reverse an M-Pesa Transaction",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"TransactionReversal\",\r\n    \"TransactionID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"ReceiverParty\": \"\",\r\n    \"RecieverIdentifierType\": \"4\",\r\n    \"ResultURL\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/reversal/v1/request",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "reversal",
            "v1",
            "request"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the Transaction Status of an M-Pesa Transaction",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/transactionstatus/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "transactionstatus",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Simulate a C2B Payment",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\":\" \",\r\n    \"CommandID\":\"\",\r\n    \"Amount\":\" \",\r\n    \"Msisdn\":\" \",\r\n    \"BillRefNumber\":\" \"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/simulate",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "simulate"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the status of a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpushquery/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpushquery",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2C Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n  \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2Pochi Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"OriginatorConversationID\": \"\",\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Initiate a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"BusinessShortCode\": \"\",\r\n    \"Password\": \"\",\r\n    \"Timestamp\": \"\",\r\n    \"TransactionType\": \"\",\r\n    \"Amount\": 1,\r\n    \"PartyA\": 254708374149,\r\n    \"PartyB\": 174379,\r\n    \"PhoneNumber\": 254708374149,\r\n    \"CallBackURL\": \"https://mydomain.com/path\",\r\n    \"AccountReference\": \"CompanyXLTD\",\r\n    \"TransactionDesc\": \"Payment of X\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpush/v1/processrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpush",
            "v1",
            "processrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make an Account Balance query",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"AccountBalance\",\r\n    \"PartyA\": \"\",\r\n    \"IdentifierType\": \"4\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/accountbalance/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "accountbalance",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Register C2B Confirmation and Validation URLs",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"ResponseType\": \"Completed\",\r\n    \"ConfirmationURL\": \"https://mydomain.com/confirmation\",\r\n    \"ValidationURL\": \"https://mydomain.com/validation\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/registerurl",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "registerurl"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Generate an OAuth Access Token",
      "protocolProfileBehavior": {
        "disableBodyPruning": true
      },
      "request": {
        "auth": {
          "type": "basic",
          "basic": [
            {
              "key": "password",
              "value": "",
              "type": "string"
            },
            {
              "key": "username",
              "value": "",
              "type": "string"
            },
            {
              "key": "showPassword",
              "value": false,
              "type": "boolean"
            }
          ]
        },
        "method": "GET",
        "header": [],
        "body": {
          "mode": "formdata",
          "formdata": []
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "oauth",
            "v1",
            "generate"
          ],
          "query": [
            {
              "key": "grant_type",
              "value": "client_credentials"
            }
          ]
        }
      },
      "response": []
    },
    {
      "name": "SWAP CheckATI",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n\t\"customerNumber\":\"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/imsi/v2/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "imsi",
            "v2",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Register URL",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"RequestType\": \"\",\r\n    \"NominatedNumber\": \"\",\r\n    \"CallBackURL\": \"\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/register",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "register"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Query",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"StartDate\": \"2020-08-04 8:36:00\",\r\n    \"EndDate\": \"2020-08-16 10:10:000\",\r\n    \"OffSetValue\": \"0\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2B Hakikisha(Query Org Info)",
      "request": {
        "auth": {
          "type": "bearer"
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"IdentifierType\": \"\",\n    \"Identifier\": \"\"\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/sfcverify/v1/query/info",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "sfcverify",
            "v1",
            "query",
            "info"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Mobile Number Validation",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"requestRefID\": \"{{$timestamp}}\",\r\n    \"shortCode\":\"\",\r\n    \"msisdn\": \"\",\r\n    \"idType\": \"\",\r\n    \"idNumber\": \"\"\r\n} ",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/v1/KYC-validation/validateID",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "v1",
            "KYC-validation",
            "validateID"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2C Hakikisha",
      "request": {
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"header\": {\n        \"requestID\": \"\",\n        \"timestamp\": \"\"\n    },\n    \"body\": {\n        \"msisdn\": \"\",\n        \"shortcode\": \"\"\n    }\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/hakikisha/v1/hakikisha",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "hakikisha",
            "v1",
            "hakikisha"
          ]
        }
      },
      "response": []
    }
  ],
  "variable": [
    {
      "key": "access_token",
      "value": ""
    }
  ]
},
    icon: BrainCircuit, description: "Complete an annotation task." },
  { id: 4, name: "Website Hosting", reward: 30, fee: 0,
    icon: Globe, description: "Create a website and submit it for review." },
];

export default function App() {
  const [page, setPage] = useState("Dashboard");
  const [amount, setAmount] = useState("280");
  const [phone, setPhone] = useState("");
  const [message, setMessage] = useState("");
  const [menuOpen, setMenuOpen] = useState(true);

  // this is a real app, so you would connect to an amount of funds paid to the user by coducting some task and then checking the user's balance on the server before allowing a withdrawal. This demo app does not have a secure backend, so it will not actually process withdrawals. It is only for demonstration purposes and does not hold any real funds. In a real application, you would need to implement proper authentication and validation to ensure that users can only withdraw funds they have earned and that the withdrawal requests are processed securely. 
  // authenticated .
  const earnings = {
    total: all amount earned by the user through tasks and referrals,
    today: all amount earned by the user today through tasks and referrals,
    withdrawn: all amount withdrawn by the user through the app,
    available: all amount available for withdrawal by the user through the app,
  };

  const referral = `${window.location.origin}/?ref=user name or id`;

  function withdraw(e) {
    e.preventDefault();
    const value = Number(amount);

    if (!Number.isFinite(value) || value <= 0 || value > 280) {
      setMessage("Enter an amount between KSh 1 and KSh 280.");
      return;
    }
    if (!/^(\+254|0)7\d{8}$/.test(phone)) {
      setMessage("Enter a valid Kenyan mobile number.");
      return;
    }

    setMessage(
      "Withdrawal not submitted: connect a secure backend to validate " +
      "your balance and process this request."
    );
  }

  const nav = [
    ["Dashboard", LayoutDashboard],
    ["Tasks", ClipboardList],
    ["Referrals", Users],
    ["Withdraw", Wallet],
  ];

  return (
    <div className="app">
      <aside className={menuOpen ? "sidebar open" : "sidebar"}>
        <h2 className="brand"><Coins /> Golden Earning</h2>
        {nav.map(([label, Icon]) => (
          <button key={label}
            className={page === label ? "nav active" : "nav"}
            onClick={() => { setPage(label); setMenuOpen(false); }}>
            <Icon size={19} /> {label}
          </button>
        ))}
        <p className="side-note">Earn through verified tasks.</p>
      </aside>

      <main className="main">
        <header className="topbar">
          <button className="menu" onClick={() => setMenuOpen(!menuOpen)}>
            <Menu />
          </button>
          <div>
            <strong>{page}</strong>
            <p>Welcome to Golden Earning</p>
          </div>
          <span className="pill">real account</span>
        </header>

        {page === "Dashboard" && <>
          <section className="hero">
            <p>AVAILABLE BALANCE</p>
            <h1>KSh {earnings.available.toLocaleString()}</h1>
            <p>real balance — real funds are held.</p>
          </section>
          <section className="stats">
            {[
              ["Total earnings", earnings.total],
              ["Today's earnings", earnings.today],
              ["Total withdrawn", earnings.withdrawn],
            ].map(([label, value]) => (
              <article className="stat" key={label}>
                <p>{label}</p>
                <h2>KSh {value.toLocaleString()}</h2>
              </article>
            ))}
          </section>
          <h2 className="section-title">Available tasks</h2>
          <TaskList onTasks={() => setPage("Tasks")} />
          <button className="primary"
            onClick={() => setPage("Withdraw")}>
            <Wallet size={18} /> Request withdrawal
          </button>
        </>}

        {page === "Tasks" && <>
          <h2 className="section-title">Earn by completing tasks</h2>
          <TaskList onTasks={() => {}} />
          <p className="notice">
            Rewards are proposed rates, not guaranteed income.
            Real tasks need verified completion and funded payouts.
          </p>
        </>}

        {page === "Referrals" && <>
          <h2 className="section-title">Invite your friends</h2>
          <article className="panel">
            <Users size={28} />
            <h2>KSh 90 per qualified referral</h2>
            <p>Reward referrals only after the eligibility rules
              are met and verified.</p>
            <label>Your referral link</label>
            <input readOnly value={referral} />
            <button className="primary"
              onClick={() => navigator.clipboard.writeText(referral)
                .then(() => setMessage("Referral link copied."))
                .catch(() => setMessage("Copy failed; select the link."))}>
              <Copy size={18} /> Copy link
            </button>
          </article>
        </>}

        {page === "Withdraw" && <>
          <h2 className="section-title">Withdraw funds</h2>
          <article className="panel">
            <p>Maximum per request: <strong>KSh 280</strong></p>
            <form onSubmit={withdraw}>
              <label>Amount (KSh)</label>
              <input type="number" min="1" max="280"
                value={amount}
                onChange={e => setAmount(e.target.value)}
                required />
              <label>M-Pesa phone number</label>
              <input placeholder="07XXXXXXXX"
                value={phone}
                onChange={e => setPhone(e.target.value)}
                required />
              <button className="primary" type="submit">
                Submit withdrawal request
              </button>
            </form>
            {message && <p className="notice">{message}</p>}
            <p>Real requests must be validated on the server
              against verified, available funds.</p>
          </article>
        </>}
      </main>
    </div>
  );
}

function TaskList({ onTasks }) {
  return (
    <section className="tasks">
      {tasks.map(task => {
        const Icon = task.icon;
        return (
          <article className="task" key={task.id}>
            <div className="task-icon"><Icon /></div>
            <h3>{task.name}</h3>
            <p>{task.description}</p>
            <p>Reward: <strong>KSh {task.reward}</strong></p>
            {task.fee > 0 &&
              <p>Proposed unlock fee: KSh {task.fee}</p>}
            <button className="secondary" onClick={onTasks}>
              View task
            </button>
          </article>
        );
      })}
    </section>
  );
}
all payments are processed through M-Pesa,
{
  "info": {
    "_postman_id": "21f972ff-40aa-439e-a906-e52cff4bcf63",
    "name": "Safaricom APIs",
    "description": "# Introduction\nWhat does your API do?\n\n# Overview\nThings that the developers should know about\n\n# Authentication\nWhat is the preferred way of using the API?\n\n# Error Codes\nWhat errors and status codes can a user expect?\n\n# Rate limit\nIs there a limit to the number of requests an user can send?",
    "schema": "https://schema.getpostman.com/json/collection/v2.1.0/collection.json",
    "_exporter_id": "13728471"
  },
  "item": [
    {
      "name": "M-Pesa Ratiba - Sandbox",
      "item": [
        {
          "name": "Access Token",
          "event": [
            {
              "listen": "test",
              "script": {
                "exec": [
                  ""
                ],
                "type": "text/javascript",
                "packages": {}
              }
            }
          ],
          "request": {
            "auth": {
              "type": "basic",
              "basic": [
                {
                  "key": "password",
                  "value": "",
                  "type": "string"
                },
                {
                  "key": "username",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "GET",
            "header": [],
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "oauth",
                "v1",
                "generate"
              ],
              "query": [
                {
                  "key": "grant_type",
                  "value": "client_credentials"
                }
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Paybill)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"174379\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Bill\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"4\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        },
        {
          "name": "createReminderSchedule-External(Buy Goods)",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "{{access_token}}",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [],
            "body": {
              "mode": "raw",
              "raw": "{\n    \"StandingOrderName\": \"\",\n    \"BusinessShortCode\": \"300584\",\n    \"CustomStoId\": \"\",\n    \"TransactionType\": \"Standing Order Customer Pay Merchant\",\n    \"Amount\": \"\",\n    \"PartyA\": \"\",\n    \"ReceiverPartyIdentifierType\": \"2\",\n    \"CallBackURL\": \"\",\n    \"AccountReference\": \"\",\n    \"TransactionDesc\": \"\",\n    \"Frequency\": \"\",\n    \"StartDate\": \"\",\n    \"EndDate\": \"\"\n}",
              "options": {
                "raw": {
                  "language": "json"
                }
              }
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/standingorder/v1/createStandingOrderExternal",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "standingorder",
                "v1",
                "createStandingOrderExternal"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "IoT APIS - Sandbox",
      "item": [
        {
          "name": "ms-iot-messaging",
          "item": [
            {
              "name": "search messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"searchValue\": \"test\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"eokeda@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/searchmessages?pageNo=1&pageSize=5",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "searchmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "5"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "filter messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"startDate\": \"\",\r\n    \"endDate\": \"\",\r\n    \"status\": \"\",\r\n    \"vpnGroup\":\"1-555162310488_VPN\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/filtermessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "filtermessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message thread",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}\r\n",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deleteMessageThread",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deleteMessageThread"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get all messages",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\": \"1-555162310488_VPN\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getallmessages?pageNo=1&pageSize=10",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getallmessages"
                  ],
                  "query": [
                    {
                      "key": "pageNo",
                      "value": "1"
                    },
                    {
                      "key": "pageSize",
                      "value": "10"
                    }
                  ]
                }
              },
              "response": []
            },
            {
              "name": "send single message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\": \"\",\r\n    \"message\": \"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/sendsinglemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "sendsinglemessage"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "delete message",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "Accept-Language",
                    "value": "EN",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationID",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJEoNjhNNlurtAFScipaw|4EzkycIrr5VezD6x3Eyess",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"id\": 0,\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/deletemessage",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "deletemessage"
                  ]
                }
              },
              "response": []
            }
          ]
        },
        {
          "name": "sim-operations",
          "item": [
            {
              "name": "all sims",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n   \"vpnGroup\":[\"1-555162310488_VPN\"],\r\n   \"startAtIndex\":\"0\",\r\n   \"pageSize\":\"0\",\r\n   \"username\":\"darajasandbox@safaricom.co.ke\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/allsims",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "allsims"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query lifecycle status",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/queryLifeCycleStatus",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "queryLifeCycleStatus"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "query customer info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/querycustomerinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "querycustomerinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "sim activation",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n     \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/simactivation",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "simactivation"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get activation trends",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"vpnGroup\":\"\",\r\n    \"startDate\":\"\",\r\n    \"stopDate\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getactivationtrends",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getactivationtrends"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "rename asset",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\",\r\n    \"assetName\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/renameasset",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "renameasset"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "get location info",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-correlation-conversationid",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"username\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/getlocationinfo",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "getlocationinfo"
                  ]
                }
              },
              "response": []
            },
            {
              "name": "suspend unsuspend sub",
              "request": {
                "auth": {
                  "type": "bearer",
                  "bearer": [
                    {
                      "key": "token",
                      "value": "{{apigee-uat-token}}",
                      "type": "string"
                    }
                  ]
                },
                "method": "POST",
                "header": [
                  {
                    "key": "x-source-system",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "x-api-key",
                    "value": "Yl4S3KEcr173mbeUdYdjf147IuG3rJ824ArMkP6Z",
                    "type": "text"
                  },
                  {
                    "key": "X-MSISDN",
                    "value": "0110100606",
                    "type": "text"
                  },
                  {
                    "key": "X-App",
                    "value": "web-portal",
                    "type": "text"
                  },
                  {
                    "key": "X-MessageID",
                    "value": "v7I5m/coazTYvz7gzXt1Hg|eKJ",
                    "type": "text"
                  },
                  {
                    "key": "Content-Type",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Correlation-ConversationId",
                    "value": "{{$guid}}",
                    "type": "text"
                  },
                  {
                    "key": "Accept",
                    "value": "application/json",
                    "type": "text"
                  },
                  {
                    "key": "X-Identity",
                    "value": "mjepkoech@safaricom.co.ke",
                    "type": "text"
                  }
                ],
                "body": {
                  "mode": "raw",
                  "raw": "{\r\n    \"msisdn\":\"\",\r\n    \"username\":\"\",\r\n    \"vpnGroup\":\"\",\r\n    \"product\":\"\",\r\n    \"operation\":\"\"\r\n}",
                  "options": {
                    "raw": {
                      "language": "json"
                    }
                  }
                },
                "url": {
                  "raw": "https://sandbox.safaricom.co.ke/simportal/v1/suspend_unsuspend_sub",
                  "protocol": "https",
                  "host": [
                    "sandbox",
                    "safaricom",
                    "co",
                    "ke"
                  ],
                  "path": [
                    "simportal",
                    "v1",
                    "suspend_unsuspend_sub"
                  ]
                }
              },
              "response": []
            }
          ]
        }
      ]
    },
    {
      "name": "IMSI",
      "item": [
        {
          "name": "IMSI V1 - CheckATI",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        },
        {
          "name": "IMSI V2 - Lookup",
          "request": {
            "auth": {
              "type": "bearer",
              "bearer": [
                {
                  "key": "token",
                  "value": "",
                  "type": "string"
                }
              ]
            },
            "method": "POST",
            "header": [
              {
                "key": "Content-Type",
                "value": "application/json",
                "type": "text"
              }
            ],
            "body": {
              "mode": "raw",
              "raw": "{\r\n    \"customerNumber\": \"\"\r\n}"
            },
            "url": {
              "raw": "https://sandbox.safaricom.co.ke/imsi-lookup/v1/checkATI",
              "protocol": "https",
              "host": [
                "sandbox",
                "safaricom",
                "co",
                "ke"
              ],
              "path": [
                "imsi-lookup",
                "v1",
                "checkATI"
              ]
            }
          },
          "response": []
        }
      ]
    },
    {
      "name": "Age On Network",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"customerNumber\": \"\"\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/registration/lookup/v1/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "registration",
            "lookup",
            "v1",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2B Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"SenderIdentifierType\": \"\",\r\n    \"RecieverIdentifierType\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"AccountReference\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2b/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2b",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Reverse an M-Pesa Transaction",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"TransactionReversal\",\r\n    \"TransactionID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"ReceiverParty\": \"\",\r\n    \"RecieverIdentifierType\": \"4\",\r\n    \"ResultURL\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/reversal/v1/request",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "reversal",
            "v1",
            "request"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the Transaction Status of an M-Pesa Transaction",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/transactionstatus/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "transactionstatus",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Simulate a C2B Payment",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\":\" \",\r\n    \"CommandID\":\"\",\r\n    \"Amount\":\" \",\r\n    \"Msisdn\":\" \",\r\n    \"BillRefNumber\":\" \"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/simulate",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "simulate"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Query the status of a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "{{apigee-token}}",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{    \r\n   \"BusinessShortCode\":\"\",    \r\n   \"Password\": \"\",    \r\n   \"Timestamp\":\"\",    \r\n   \"CheckoutRequestID\": \"\"\r\n}  "
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpushquery/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpushquery",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2C Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n  \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make a B2Pochi Payment Request",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"OriginatorConversationID\": \"\",\r\n    \"InitiatorName\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"\",\r\n    \"Amount\": \"\",\r\n    \"PartyA\": \"\",\r\n    \"PartyB\": \"\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\",\r\n    \"Occasion\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/v1/paymentrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "v1",
            "paymentrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Initiate a Lipa na M-Pesa Online Payment",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"BusinessShortCode\": \"\",\r\n    \"Password\": \"\",\r\n    \"Timestamp\": \"\",\r\n    \"TransactionType\": \"\",\r\n    \"Amount\": 1,\r\n    \"PartyA\": 254708374149,\r\n    \"PartyB\": 174379,\r\n    \"PhoneNumber\": 254708374149,\r\n    \"CallBackURL\": \"https://mydomain.com/path\",\r\n    \"AccountReference\": \"CompanyXLTD\",\r\n    \"TransactionDesc\": \"Payment of X\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/stkpush/v1/processrequest",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "stkpush",
            "v1",
            "processrequest"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Make an Account Balance query",
      "request": {
        "method": "POST",
        "header": [
          {
            "key": "Authorization",
            "value": "Bearer <Access-Token>"
          },
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"Initiator\": \"\",\r\n    \"SecurityCredential\": \"\",\r\n    \"CommandID\": \"AccountBalance\",\r\n    \"PartyA\": \"\",\r\n    \"IdentifierType\": \"4\",\r\n    \"Remarks\": \"\",\r\n    \"QueueTimeOutURL\": \"\",\r\n    \"ResultURL\": \"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/accountbalance/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "accountbalance",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Register C2B Confirmation and Validation URLs",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"ResponseType\": \"Completed\",\r\n    \"ConfirmationURL\": \"https://mydomain.com/confirmation\",\r\n    \"ValidationURL\": \"https://mydomain.com/validation\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/c2b/v1/registerurl",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "c2b",
            "v1",
            "registerurl"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Generate an OAuth Access Token",
      "protocolProfileBehavior": {
        "disableBodyPruning": true
      },
      "request": {
        "auth": {
          "type": "basic",
          "basic": [
            {
              "key": "password",
              "value": "",
              "type": "string"
            },
            {
              "key": "username",
              "value": "",
              "type": "string"
            },
            {
              "key": "showPassword",
              "value": false,
              "type": "boolean"
            }
          ]
        },
        "method": "GET",
        "header": [],
        "body": {
          "mode": "formdata",
          "formdata": []
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/oauth/v1/generate?grant_type=client_credentials",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "oauth",
            "v1",
            "generate"
          ],
          "query": [
            {
              "key": "grant_type",
              "value": "client_credentials"
            }
          ]
        }
      },
      "response": []
    },
    {
      "name": "SWAP CheckATI",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\r\n\t\"customerNumber\":\"\"\r\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/imsi/v2/checkATI",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "imsi",
            "v2",
            "checkATI"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Register URL",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"RequestType\": \"\",\r\n    \"NominatedNumber\": \"\",\r\n    \"CallBackURL\": \"\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/register",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "register"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Pull API - Query",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"ShortCode\": \"\",\r\n    \"StartDate\": \"2020-08-04 8:36:00\",\r\n    \"EndDate\": \"2020-08-16 10:10:000\",\r\n    \"OffSetValue\": \"0\"\r\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/pulltransactions/v1/query",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "pulltransactions",
            "v1",
            "query"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2B Hakikisha(Query Org Info)",
      "request": {
        "auth": {
          "type": "bearer"
        },
        "method": "POST",
        "header": [
          {
            "key": "Content-Type",
            "value": "application/json",
            "type": "text"
          }
        ],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"IdentifierType\": \"\",\n    \"Identifier\": \"\"\n}"
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/sfcverify/v1/query/info",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "sfcverify",
            "v1",
            "query",
            "info"
          ]
        }
      },
      "response": []
    },
    {
      "name": "Mobile Number Validation",
      "request": {
        "auth": {
          "type": "bearer",
          "bearer": [
            {
              "key": "token",
              "value": "",
              "type": "string"
            }
          ]
        },
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\r\n    \"requestRefID\": \"{{$timestamp}}\",\r\n    \"shortCode\":\"\",\r\n    \"msisdn\": \"\",\r\n    \"idType\": \"\",\r\n    \"idNumber\": \"\"\r\n} ",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/v1/KYC-validation/validateID",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "v1",
            "KYC-validation",
            "validateID"
          ]
        }
      },
      "response": []
    },
    {
      "name": "B2C Hakikisha",
      "request": {
        "method": "POST",
        "header": [],
        "body": {
          "mode": "raw",
          "raw": "{\n    \"header\": {\n        \"requestID\": \"\",\n        \"timestamp\": \"\"\n    },\n    \"body\": {\n        \"msisdn\": \"\",\n        \"shortcode\": \"\"\n    }\n}",
          "options": {
            "raw": {
              "language": "json"
            }
          }
        },
        "url": {
          "raw": "https://sandbox.safaricom.co.ke/mpesa/b2c/hakikisha/v1/hakikisha",
          "protocol": "https",
          "host": [
            "sandbox",
            "safaricom",
            "co",
            "ke"
          ],
          "path": [
            "mpesa",
            "b2c",
            "hakikisha",
            "v1",
            "hakikisha"
          ]
        }
      },
      "response": []
    }
  ],
  "variable": [
    {
      "key": "access_token",
      "value": ""
    }
  ]
}