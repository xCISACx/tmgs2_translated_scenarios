section "i26_m4_000"{
    if (Parameter_GetByParam(2, 52) <= 59){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_13F", 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("I2604000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You've gotten better at retuning\nstrings.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, really?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I2604000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "But you're still just average\ncompared to me!\nKeep improving your skills like\nthis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented. I'm glad!)");
            }
        else {
            Voice_PlayVoice("I2604000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You've gotten better at retuning\nstrings.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, really?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I2604000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nYou're much better than when you\nfirst started working here.");
            Character_ChFace(0, 2, 5);
            Voice_PlayVoice("I2604000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you practicing in secret?\nI'm not gonna lose to you, okay!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm so glad!\nI was complimented by\n｛Hariya＊＊｝!)");
            }
        Parameter_AddCh1Param(4, 61, 5);
        Parameter_AddCh1Param(4, 60, 5);
        Parameter_AddCh1Param(4, 62, #5);
        }
    else if ((Parameter_GetByParam(2, 52) >= 60) && (Parameter_GetByParam(2, 52) <= 89)){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_13F", 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("I2604000_D00500", 4, "I2604000_D00501");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, ｛主人公｝.\nWhere's the magazine order sheet\nthat I asked you to do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah...!\nSorry, I haven't filled it out,\nyet...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I2604000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh!? What the hell are you doing!?");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("I2604000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You can't be the newbie forever!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was yelled at...\nI have to be more aware...)");
            }
        else {
            Voice_PlayVoice("I2604000_D00800", 4, "I2604000_D00801");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, ｛主人公｝.\nWhat's happening with the magazine\norder that I asked you to do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah...!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I2604000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Meaning you forgot, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "S-Sorry...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I2604000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's fine since the magazine doesn't\ngo on sale until later...\nBut be careful next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was yelled at...\nI have to be more aware...)");
            }
        Parameter_AddCh1Param(4, 61, 5);
        Parameter_AddCh1Param(4, 60, 3);
        Parameter_AddCh1Param(4, 62, #3);
        }
    else if (Parameter_GetByParam(2, 52) >= 90){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_13F", 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("I2604000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You've learned quite a bit since you\nfirst came here, so I'm gonna test\nyou!");
            Message_Who(0);
            Message_MsgDisp("主人公", "A test!?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("I2604000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nName 2 or 3 effectors that distort\nsounds.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh... Overdrive and distortion.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I2604000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Correct!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("I2604000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Next.\nWhat is the effector that gives off\na sound similar to an echo in a hall\nor room?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Reverb!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I2604000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Correct! You've learned lots!\nThat's awesome!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad! I was complimented!)");
            }
        else {
            Voice_PlayVoice("I2604000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You've learned quite a bit since you\nfirst came here, so I'm gonna test\nyou!");
            Message_Who(0);
            Message_MsgDisp("主人公", "A test!?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I2604000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Name three types of guitars.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh... Acoustic, Gut and Electric.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I2604000_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Correct.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("I2604000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Next.\nAn electric acoustic guitar is a\ntype of acoustic guitar with what\nattached to it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Pickups!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I2604000_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What the-- How boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("I2604000_D02100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It means that I can't mess around\nwith you anymore....\nHow boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hariya＊＊｝ is kind of\nsulking...\nI'm being complimented... right?)");
            }
        Parameter_AddCh1Param(4, 61, 5);
        Parameter_AddCh1Param(4, 60, 10);
        Parameter_AddCh1Param(4, 62, #5);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
