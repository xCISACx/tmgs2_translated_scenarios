section "s09_m8_000"{
    int var0;
    if (Parameter_GetCh1Param(8, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0908000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh. Fortunes.");
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("S0908000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Let's try it while we have the\nchance.");
        Message_MsgSel("Let's try it.", "Hmm, I'd rather not.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0908000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay!\nWell, I wonder what I will get～.\nI don't care as long as it's not\nterrible luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm getting excited...)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S0908000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I see.\nWell, getting terrible luck would be\nbad this early in the new year.\nWe'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, maybe we should have tried\nit...)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(8, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0908000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... So, let's do this!\nIt's time to try our luck this year.");
        Character_BlinkStart(8, 3, (#1));
        Voice_PlayVoice("S0908000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "To get good luck or bad luck, it's\nall up to you!\nWell, go on!");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Hey, are those fortunes?");
        Character_BlinkStart(8, 0, (#1));
        Voice_PlayVoice("S0908000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh, while we're here, shall we try\nit?");
        Message_MsgSel("Yes, let's take the chance.", "... I'm fine without it.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0908000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Don't pull another one or cry if you\npull a bad fortune, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... I won't.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0908000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I hope not. Okay, let's pull～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get good results...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S0908000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What the-- Not interested? ...\nMaybe I should give it up, too...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ looks like\nhe's feeling down...\nI wonder if I hurt him?)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0908000_H01000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Are you going to pull?\nA fortune.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, I'm not sure.");
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("S0908000_H01100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nI feel like pulling one, but I'll be\nreal heartbroken if I had something\nweird written on it...");
        Message_MsgSel("Since we're here, let's pull!", "So, let's not go through with it.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S0908000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I agree.\nOkay, play innocent, play\ninnocent...\nCrap, I'm nervous...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ seems to be\nreally serious..)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S0908000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...... Is that so...\nI guess we'll pass...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ seems upset.\nI wonder if I hurt him...)");
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "M8", 0);
        break ;
        case 1:
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        break ;
        }
    System_Call_GS2("S12", "M8", 0);
    }
