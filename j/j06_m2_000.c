section "j06_m2_000"{
    Message_MsgSel("Sure, definitely!", "Uhh, umm... Sorry.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("J0602000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's decided then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("J0602000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.... Don't be late.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ asked me out\non a date!)");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("J0602000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("J0602000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nIt would be nice if Sunday had nice\nweather.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ asked me out\non a date!)");
            }
        Date_SetNextSandayDateEvent(2);
        break ;
        case 1:
        if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("J0602000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... So you're not that interested.\nOkay, later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("J0602000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see... Okay.\nTell me if there's somewhere you\nwanna go next time.");
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("J0602000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Sorry for stopping you. Next time...\nthen.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            }
        Parameter_AddCh1Param(2, 60, #5);
        Parameter_AddCh1Param(2, 62, 5);
        break ;
        }
    }
