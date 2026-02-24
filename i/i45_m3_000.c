section "i45_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I4503000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am on my way home after finishing\nmy errands.\nI am not here to shop.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I4503000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "May you find some clothing that\nsuits me?\nSomething with a gallant feeling,\nbut will not make people feel\nuncomfortable.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nHmm, aren't you fine the way you are\nnow?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I4503000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Really?\nI feel relieved to hear that.\nI will go home without buying\nanything today then.");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He l-left.\nMaybe I'm not cut out for sales\njobs...)");
        }
    else {
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(3, "M3_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4503000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "A-Ah, you have worked hard....\nI must learn about, umm, trends,\nevery now and then.");
        Voice_PlayVoice("I4503000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What do you...\nNo, what do girls the same age as us\nlike at the moment?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, are you buying a present for\nsomeone?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4503000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No... Well, not right now.\nI want to know so I can buy\nsomething when the day comes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're preparing for it?\nThat's so nice of you,\n｛Hikami＊＊｝!");
        Voice_PlayVoice("I4503000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Perhaps you could choose according\nto your...\nyour own preferences?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay! Leave it to me!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
