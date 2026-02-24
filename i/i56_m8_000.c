section "i56_m8_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetByParam(5, 52) <= 59){
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(This goes here...\nYeah, I've gotten quite used to this\njob.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H00000", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nYou've worked hard.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I5608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It looks like you're quite used to\nthis.\nYou really helped us out, seeing as\nyou learn quickly.\nKeep working hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Masaki＊＊｝!)");
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(This goes here...\nYeah, I've gotten quite used to this\njob.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H00200", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That's good, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("I5608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, you're still average compared\nto me.\nKeep working hard, without cutting\ncorners!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(This goes here...\nYeah, I've gotten quite used to this\njob.)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, I came here to help～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("I5608000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... What the-- You're already done.");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I5608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Bravo, for working quickly....\nNot being able to help you was bad\nluck for me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I5608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, it's not like work is over.\nYeah, there are heaps of things to\ndo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Masaki＊＊｝!)");
            }
        Parameter_AddCh1Param(8, 61, 5);
        Parameter_AddCh1Param(8, 60, 5);
        }
    else if ((Parameter_GetByParam(5, 52) >= 60) && (Parameter_GetByParam(5, 52) <= 89)){
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, oh no!");
            SoundEffect_PlayStream(3, "SS_T_00_081_M00");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oi, are you okay!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝...\nYes, I'm fine.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("I5608000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You put too much water in here...\nIt's heavy, so you should have put\nless in.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I stuffed up...)");
            SoundEffect_StopStream(3, 40);
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, oh no!");
            SoundEffect_PlayStream(3, "SS_T_00_081_M00");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oi, are you okay!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝...\nYes, I'm fine.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("I5608000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You don't have to hesitate to ask\nfor help when you have to move\nsomething heavy.\nIt's not like I would refuse.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay... Thank you very much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ was worried\nabout me...\nHow nice of him.)");
            SoundEffect_StopStream(3, 40);
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, oh no!");
            SoundEffect_PlayStream(3, "SS_T_00_081_M00");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("I5608000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oi, are you okay!? Are you wet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...\nYes, I'm fine.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("I5608000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You say you're fine...\nYou're soaking wet.\nGo clean up in the back room.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, but...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("I5608000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'll clean it up. Quickly!\nYou'll catch a cold～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yes! So...\nplease take care of this for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ is nice.\nHe was worried about me.)");
            SoundEffect_StopStream(3, 40);
            }
        Parameter_AddCh1Param(8, 61, 5);
        Parameter_AddCh1Param(8, 60, 3);
        }
    else if (Parameter_GetByParam(5, 52) >= 90){
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Voice_PlayVoice("I5608000_W01500", #1, "");
            Message_Who(0);
            Message_MsgDisp("Customer", "I would like a bouquet, could you\njust choose some flowers for me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. What is your budget?");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much.");
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("I5608000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That bouquet you made just now was\nnice.\nThe customer was happy about it,\ntoo.\nKeep it up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm so happy!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Voice_PlayVoice("I5608000_W01700", #1, "");
            Message_Who(0);
            Message_MsgDisp("Customer", "I would like a bouquet, could you\njust choose some flowers for me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. What is your budget?");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much.");
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I5608000_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "The customer was happy.\nIsn't that great?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I5608000_H01900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Make people smile with flowers.\nThat's a florist's rule.\nYou did well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Masaki＊＊｝!\nI'm so glad～!)");
            }
        else {
            Voice_PlayVoice("I5608000_W02000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Customer", "I would like a bouquet, could you\njust choose some flowers for me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. What is your budget?");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much.");
            Voice_PlayVoice("I5608000_H02100", #1, "");
            Message_Who(8);
            Message_MsgDisp("？？？", "*Sigh*... That was shocking.");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(8, "M8_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I5608000_H02200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You flower choice and wrapping was\nperfect.\nI've got no right to critique you\nanymore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's not true...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("I5608000_H02300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "As a senior, to see my junior\nadvance feels both happy and sad...");
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("I5608000_H02400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Maybe I should get you to teach me\nflower arrangement next time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Does that mean\n｛Masaki＊＊｝ recognizes me\nas an adult now?)");
            }
        Parameter_AddCh1Param(8, 61, 5);
        Parameter_AddCh1Param(8, 60, 10);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
