section "i45_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I4501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I was just passing by, here and\nthere.\nLater.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You working hard?\nSo hard that people can see that you\ncan actually work?");
        Message_Who(0);
        Message_MsgDisp("主人公", "What a horrible way to say that...\nWhat about you,\n｛Saeki＊＊｝?\nAre you window shopping?");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I4501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Maybe.\nI'll leave now so you won't get\nfired.");
        }
    else {
        Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome!");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I4501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I kinda got a favor to ask.\nIs that okay?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I have to buy a present for a female\ncustomer at the store.\nYou got anything that will make a\ngirl happy?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, what good service.\nI'll bring back a few samples, so\nplease wait, okay?");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_Who(0);
        Message_MsgDisp("主人公", "So, three dozen scented candles.\nI'll wrap it up and have it sent to\nSangosho later, okay?");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("I4501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Thanks. You, umm...\nare good at serving customers.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
