section "s09_m1_000"{
    int var0;
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0901000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, fortunes.... Wanna pull?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, should I?");
        Message_MsgSel("Okay, let's pull one!", "Umm, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S0901000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Pull one?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nAre you going to pull one,\n｛Saeki＊＊｝?");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S0901000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's really like a woman to love\nfortunes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get a good result...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("S0901000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Is that so. Wonder why that is...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nPerhaps he wanted to pull a\nfortune?)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0901000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, fortunes....\nWhat do you want to do? Wanna pull?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, should I?");
        Message_MsgSel("Okay, let's pull one!", "Umm, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S0901000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Well, I'm leaving. Good luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Pull one, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0901000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eeek! It's crowded!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(My turn to pull.\nI hope I get a good result...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("S0901000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You pass...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S0901000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm... Wonder why.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Did I do something bad?)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, fortunes!");
        Voice_PlayVoice("S0901000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What do you want to do?\nDo you want to pull one?");
        Message_MsgSel("Yeah, let's pull!", "Eh, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S0901000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Then go pull.\nI'll be waiting like a father.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh. Fathers pull, too.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0901000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aah... It's crowded!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, time to pull!\nI hope I get a good result...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0901000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Huh? Is that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. I'll pass.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("S0901000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seemed disappointed...\nMaybe I should have drawn one?)");
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
        System_Call_GS2("S11", "M1", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M1", 0);
    }
