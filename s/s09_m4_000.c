section "s09_m4_000"{
    int var0;
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0904000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh... Fortunes. You wanna pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～, should I?");
        Message_MsgSel("Okay, I'll pull one.", "Eh～, I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0904000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll pull one, too.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0904000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A-Aren't you nervous or something?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(My heart's pounding a little!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S0904000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What the-- How boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seemed like he was looking\nforward to it.\nMaybe it was bad to turn it down?)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0904000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Umm, there are fortunes to enjoy\nnext!\nWhat do you wanna do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～, should I?");
        Message_MsgSel("Yeah, I'll take the chance.", "Eh, too much of a hassle.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0904000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Take the risk! Okay, I'll pull～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm getting nervous.)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S0904000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmmmm.... You won't pull, huh? ...\nHow boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, maybe that was a bad thing to\ndo...)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0904000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Fortunes!\nHey, do you wanna pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Should I...?");
        Message_MsgSel("Yeah, I'll try it.", "Oh, I'm not interested.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0904000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay! I will not be defeated...\nI took the risk a year ago with\ncrushing victory!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How is victory or defeat\nrelated...?)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("S0904000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sorry...");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0904000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oi.........");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("S0904000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Got it～....");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was he looking forward to it by\nchance?\nI feel like I've done something\nbad...)");
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
        System_Call_GS2("S11", "M4", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M4", 0);
    }
