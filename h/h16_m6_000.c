section "h16_m6_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("H1606000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yay! They won!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H1606000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, this feels good!\nWhen the team you're supporting\nwins, it feels like it was worth\ntrying hard!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!)");
            }
        else {
            Voice_PlayVoice("H1606000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "They won, Senpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Voice_PlayVoice("H1606000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You were making some face when you\nwere cheering for them.\nThe other team were surely scared.");
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H1606000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Kidding. It was a joke!\nBut it really is great.\nI also felt like it was worth\ncheering for them!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "They lost...");
            Voice_PlayVoice("H1606000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "We put our energy into cheering,\ntoo...\nAh, it can't be helped.\nThe other team was better.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1606000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But...\nI only cheered, but I still feel\nbitter.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(As expected, it's unfortunate...)");
            }
        else {
            Voice_PlayVoice("H1606000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... It was close.\nWe put our energy into cheering,\ntoo...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1606000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But...\nit's not like it's your fault,\nSenpai.\nSo cheer up... okay?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H1606000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Ah, geez!!\nI wanna whack those guys in the\nBaseball Club for making you sad,\nSenpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(As expected, it's unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
