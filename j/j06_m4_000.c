section "j06_m4_000"{
    Message_MsgSel("Yeah, I wanna go!", "Uhh... um, sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("J0604000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... *Sigh*...... What a relief...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("J0604000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Ah, my bad!\nI feel a little more relaxed now...\nnot! Ah, no, it's nothing!");
        Message_Who(0);
        Message_MsgDisp("主人公", "R-Really?");
        Character_ChFace(0, 0, 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0604000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay. I look forward to it...\nNo, I mean, you should look forward\nto it!\nLater!!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Haha.\n｛Hariya＊＊｝ asked me out\non a date!)");
        Date_SetNextSandayDateEvent(4);
        break ;
        case 1:
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("J0604000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Seriously!? ...\nI guess you don't know.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0604000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Don't make that face...");
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("J0604000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Be free next time! Later!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(4, 60, #5);
        Parameter_AddCh1Param(4, 62, 5);
        break ;
        }
    }
