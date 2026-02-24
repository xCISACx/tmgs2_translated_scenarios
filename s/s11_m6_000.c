section "s11_m6_000"{
    int var0;
    if (Parameter_GetCh1Param(6, 335) == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("S1106000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Good luck, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Again?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1106000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI get things like this every year.\nEven when I was a child.\nIt's not bad, it's just boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that definitely can be.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("S1106000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "*Sigh*... Middle luck...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is middle luck not a good thing?");
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("S1106000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is getting good luck every year\nsince childhood, good?\nEven bad luck would be good.\nI want to draw something\ndifferent...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even bad luck is good...?)");
            }
        }
    else if (Parameter_GetCh1Param(6, 335) == 1){
        if (Parameter_GetCh1Param(6, 130) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("S1106000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... Good luck this year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You have amazing luck...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S1106000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What's so amazing...?\nIt can't be helped.\nTo me, I think someone's plotting a\nconspiracy...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A conspiracy...?\nIs ｛Amachi＊＊｝ getting\nsuspicious?)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("S1106000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", ".............");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, good luck?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1106000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm...\nSomeone's absolutely plotting\nagainst me!\n\"Amachi came!\nMake them all good luck!\"\nWell, it's strange!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A conspiracy...?\nIs ｛Amachi＊＊｝ getting\nsuspicious?)");
            }
        }
    else {
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_Chara_GS2(6, "M6_??F", 0);
                Voice_PlayVoice("S1106000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Good luck, again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? Again?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("S1106000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI get things like this every year.\nEven when I was a child.\nIt's not bad, it's just boring.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Well, that definitely can be.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Character_Chara_GS2(6, "M6_??F", 0);
                Voice_PlayVoice("S1106000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "*Sigh*... Middle luck...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is middle luck not a good thing?");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("S1106000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is getting good luck every year\nsince childhood, good?\nEven bad luck would be good.\nI want to draw something\ndifferent...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even bad luck is good...?)");
                }
            }
        else if (var0 >= 51){
            if (Parameter_GetCh1Param(6, 130) == 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(6, "M6_??F", 0);
                Voice_PlayVoice("S1106000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah... Good luck this year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You have amazing luck...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("S1106000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What's so amazing...?\nIt can't be helped.\nTo me, I think someone's plotting a\nconspiracy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(A conspiracy...?\nIs ｛Amachi＊＊｝ getting\nsuspicious?)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what ｛Amachi＊＊｝\ngot?)");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(6, "M6_??F", 0);
                Voice_PlayVoice("S1106000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".............");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, good luck?");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("S1106000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm...\nSomeone's absolutely plotting\nagainst me!\n\"Amachi came!\nMake them all good luck!\"\nWell, it's strange!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(A conspiracy...?\nIs ｛Amachi＊＊｝ getting\nsuspicious?)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 335, 1);
    }
