section "s09_m7_000"{
    int var0;
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0907000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Found the fortunes!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Fortunes? Is that so...");
        Message_MsgSel("Do you want to pull one?", "Let's pass for now.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0907000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Of course.\nSensei aims for excellent luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will aim for it, too...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0907000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I see... That is a pity...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have just pulled one.)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "S0907000_G00300");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. Look at that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, fortunes?");
        Message_MsgSel("Do you want to pull one?", "Let's pass for now.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0907000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I thought you would never ask.\nWell, since we've decided to, let's\nhurry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is it okay to be nervous?");
            Voice_PlayVoice("S0907000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No, \"Strike while the iron's hot\"!\nLet's go all out until we get\nexcellent luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I hope we get a good\nfortune...)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0907000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Eh? *Sigh* I see...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Is ｛Wakaouji＊＊｝\ndisappointed?\nMaybe I should have pulled a\nfortune...)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "S0907000_G00700");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nThere are fortunes here.\nDo you want to pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, umm, well...");
        Message_MsgSel("Yes, of course! Let's pull!", "I'm not interested.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0907000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Right!\nIt is not New Year's Day without\npulling a fortune.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Is that how you feel,\n｛Wakaouji＊＊｝?");
            Voice_PlayVoice("S0907000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nIt is the perfect chance to prove\nthe probability theory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nSomehow I don't understand things\nlike that very well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I wonder what he meant...?)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0907000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Well, it's fine.\nI will abandon that idea...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nI think I did something bad...)");
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
        System_Call_GS2("S11", "M7", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M7", 0);
    }
