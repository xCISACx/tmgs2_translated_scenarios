section "p14_m3_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Who made this sandwich?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I did, why?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("P0403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It was delicious.\nI wanted to know who made it....\nSo, it was you.");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("P0403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It was too good to be on today's\nmenu.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hooray!\nI was praised by\n｛Hikami＊＊｝!)");
        }
    else {
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0403000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It tastes deadly.");
        Message_Who(0);
        Message_MsgDisp("主人公", "The sandwich?");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("P0403000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That is correct.\nThe egg in the sandwich is yellow\nand I think this tuna sandwich is\ngoing to make me shed tears.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aah...!\nI must have mistakened the mustard\nfor mayonnaise!");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("P0403000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... You made it.\nAs for this, it's not something you\nserve to customers.\nI'm leaving, but don't resent me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Aah～... real big mistake.)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
