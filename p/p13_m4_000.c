section "p13_m4_000"{
    Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_910_000", 127, 40);
    if (Parameter_GetCh1Param(4, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry to keep you waiting, here is\nyour coffee and sandwich.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh* It's so busy that I feel\nfaint...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome...!\nAh, ｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_17F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Is the live after this?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P0304000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah. This place is popular.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, kinda.\nWhat will you be having?");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("P0304000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll have a hot lemonade then.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay. One hot lemonade coming up!");
        }
    else if (Parameter_GetCh1Param(4, 130) >= 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry to keep you waiting, here is\nyour coffee and sandwich.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh* It's so busy that I feel\nfaint...)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_17F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome...!\nAh, ｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("P0304000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.\nEh, you look good in waitress\nattire.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks.\nYour outfit is cool too,\n｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("P0304000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah... Of course!\nAnyway, you mean, \"that outfit also\nlooks cool\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha. Now, what will you order?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("P0304000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm... I'll take a hot lemonade.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, understood!\nOne hot lemonade coming up!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P14", "M4", 0);
    }
