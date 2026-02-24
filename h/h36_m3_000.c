section "h36_m3_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_01F", 0);
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Voice_PlayVoice("H3603000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Aren't you doing well?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H3603000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I was surprised that you came first.\nI will make sure I write about your\nvictory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I won!)");
            }
        else {
            Voice_PlayVoice("H3603000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You did it.\nYour rank and your time was amazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did it!\nThanks for cheering me on too,\n｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H3603000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, I am glad that I can cheer you\non....\nI was watching you the entire time.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3603000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, no, umm...\nAnyway, it was a good contest.\nCongratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        }
    else {
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Voice_PlayVoice("H3603000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That was unfortunate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3603000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I will report honestly about this\nresult.\nBut please don't feel down.\nThe Student Council is expecting\ngreat things from you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Voice_PlayVoice("", 3, "H3603000_C00700");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, you were\nclose.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I lost.");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3603000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "From where I was watching from, you\nwere just a hairline behind.\nYou've worked quite hard.\nIsn't that right?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3603000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So it would be nice if you remember\nthis experience next time.\nBitterness is pointless.\nI will keep supporting you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Thanks, ｛Hikami＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～. I should have tried harder.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
