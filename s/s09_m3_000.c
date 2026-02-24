section "s09_m3_000"{
    int var0;
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_??F", 0);
    Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Voice_PlayVoice("S0903000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe front of the fortunes isn't too\ncrowded.\nWould you like to pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～, should I?");
        Message_MsgSel("Okay, let's pull one!", "Hmm, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("S0903000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You have to stand in line.\nYou may quite like being in line.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Are you going to pull,\n｛Hikami＊＊｝?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0903000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Oh... me. It cannot be helped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get a good result!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("S0903000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see... You must dislike fortunes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Perhaps he wanted to pull a\nfortune...)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Voice_PlayVoice("S0903000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe fortunes are popular, as well.\nWhat would you like to do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh, hmm...");
        Message_MsgSel("Okay, let's pull one!", "Hmm, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0903000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then you may pull my share, too.\nI will pray for good fortune.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, you're not going to pull,\n｛Hikami＊＊｝?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0903000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I grow weary of lines.");
            Character_BlinkStart(3, 0, (#1));
            Voice_PlayVoice("S0903000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nVery well, I will take the\nresponsibility of my share.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Now, time to pull a fortune.\nI hope I get a good result...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0903000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Fortunes foretell the new year.\nWhy would you choose not to pull?\n... It is fine. Very well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nIt feels like I did something\nbad...)");
            var0 = 1;
            break ;
            }
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, hey, fortunes!");
        Voice_PlayVoice("S0903000_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... You want to pull a fortune?");
        Message_MsgSel("Yeah, let's pull one!", "No, I'm not into things like that.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0903000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI thought that is what you would\nsay.\nDo your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Are you going to draw one,\n｛Hikami＊＊｝?");
            Voice_PlayVoice("S0903000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ehh...\nThere will not be many good fortunes\nleft with a crowd like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, is that so?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S0903000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThere may be a lot prepared for the\nShinto shrine.\nI will try to pull without\nanticipation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, let's pull!\nI hope to get a good result...!)");
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0903000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see... You are quite strong.\nThere is nothing that you want a\nfortune to tell you, right?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0903000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You make your own luck....\nI must learn from your example.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seems to be very disappointed...\nShould I have pulled a fortune,\nafter all?)");
            var0 = 1;
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    switch (var0){
        case 0:
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "M3", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M3", 0);
    }
