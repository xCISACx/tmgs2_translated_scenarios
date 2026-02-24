section "n02_m5_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You really are determined...\nI'm surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! It was good to do my best!)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well done～. Amazing～.\nI'm impressed～.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wish you could teach me next time,\neven if it's before the test.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Saw the test results.\nIt's surprising that you aced them.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm surprised myself, too.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("N0205000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "When I see you, deep down in my\nheart I think I should try harder,\ntoo.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's so strange, honestly...\nYou're an impressive girl.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI was praised by\n｛Chris＊＊｝!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E00600", 5, "N0205000_E00601");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're doing your best,\n｛主人公｝.\nI wonder if you can go higher.\nTeach me, next time～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I wonder if my efforts paid\noff?)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "N0205000_E00700");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝, Joy, joy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Joy...?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("N0205000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your name's around the top of the\nlist.\nI envy you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, you mean the rank?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That one. You're really smart.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was good to do my best!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Can you really go that high if you\nreally try hard enough?");
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("N0205000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Since it's you, you really are\ntrying of your best....");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0205000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Amazing, yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if my hard work paid off?)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "A good rank.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("N0205000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If I were to go that far, Mom would\nbe worried sick without scolding\nme...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmmm, is this kind of thing okay?)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I saw it in your face～.\nWell, it's so-so, right? ...\nBut it's not good to have an empty\nmind.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I seem like a cat, beckoning,\nwaiting down below～.\nCome, come!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nIt's best if I try harder...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's so unusual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0205000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I thought you could have aimed a\nlittle higher.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So unusual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nIt's best if I try harder...)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ooh～.\nLet's start the Dummy club\ninitiation ceremony now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What!?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("N0205000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you join the club, studying is a\nno-no.");
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0205000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you're caught studying, they'll\nslap you on the wrist or flick you.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("N0205000_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Great system, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Woah～, I have to try harder!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(5, "NON");
                }
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Welcome!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("N0205000_E02500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even looking at it like this from\nbelow, it's quite comfy.\nTogether forever▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmmm...\nIt wasn't quite a good nod～)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(5, "NON");
                }
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("N0205000_E02600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I found your name close to mine...");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0205000_E02700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad! ... But what's wrong?\nDid something bad happened?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I made him worried...\nI must try harder next time!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(5, "NON");
                }
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    }
