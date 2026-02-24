section "h46_m5_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Voice_PlayVoice("H4605000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Oh, they won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes!\nWe were passionate about cheering!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4605000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They would win when they have cute\ngirls cheering for them.\nThat Baseball Club is amazing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh!\nCongratulations, Baseball Club!)");
                }
            else {
                Voice_PlayVoice("H4605000_E00200", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They won, ｛主人公｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!\nAt the end, I didn't know what was\ngoing to happen.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4605000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I didn't know what was going to\nhappen with you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, what do you mean?");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("H4605000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Your cheering was awesome.\nNo matter who you would be cheering\nfor, it seems like your cheering\nwould motivate anyone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Was it that good?");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H4605000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Haha, I'm kidding.\nI think that if you had such\npassionate cheering, you wouldn't\nlose...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(But I'm glad they won.)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Voice_PlayVoice("H4605000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Bad luck...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. They were so close....\nThat was unfortunate.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4605000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They lost, even though they had such\ngood cheering from the cute girls.\nThe Baseball Club should play\nproperly～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was really close...)");
                }
            else {
                Voice_PlayVoice("H4605000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That was close. They almost won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... They lost their power...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4605000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right...\nWith faces like that cheering for\nthem, you would lose power.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh. Were our faces that good?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4605000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nYou guys were really trying your\nbest.\nYou were cute▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha.\nGeez, ｛Chris＊＊｝, you're\nalways joking around.");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4605000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nIt'd be nice if you could always\nsmile like that after the games.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah. Right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's annoying that they lost...\nBut I will do my best to cheer next\ntime, too!)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Voice_PlayVoice("H4605000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay. They won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it was amazing! I'm glad!");
                Voice_PlayVoice("H4605000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Seeing so many cute girls being this\nhappy makes me happy too～.");
                Voice_PlayVoice("H4605000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Today is a lucky day for me.\nI get to see you in your cute\nuniform, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt was worth putting my all into\ncheering!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "They won...");
                Voice_PlayVoice("H4605000_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, it was a good race.");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("H4605000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hm? What's wrong? You look confused?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I was cheering so much that I'm\nexhausted...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4605000_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "This is bad.\nIt's still a long way home.\nIf you're tired now, you shouldn't\nbe in the Cheerleading Club.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4605000_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You gotta show how happy you are\nwith your body when they win.\nI wanna see your unrivalled smile.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H4605000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Come on, snap back to reality～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, ｛Chris＊＊｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I did my best cheering!)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Voice_PlayVoice("H4605000_E02100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's sad seeing this many cute girls\nfrustrated...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4605000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, the Track and Field Club are\nalready back on their feet.\nThey're gonna go eat udon.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, really?");
                Voice_PlayVoice("H4605000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm lying. I don't know if they are.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, ｛Chris＊＊｝!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4605000_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But their faces tell me that they're\ngonna try harder next time.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H4605000_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So you should also take it to the\nnext step.\nYou should give it your all next\ntime, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah. You're right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's unfortunate...\nBut I will try my best next time,\ntoo.)");
                }
            else {
                Voice_PlayVoice("H4605000_E02600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was close.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4605000_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But in terms of cheering, we won.\nIt was by far the best.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Really?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4605000_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nDefinitely, because I was watching\nfrom up close.\nShould I write you a certificate?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H4605000_E02900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then I'll write one for you\nlater～....\nDo you perhaps not believe me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's not that.\nThanks, ｛Chris＊＊｝.");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("H4605000_E03000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Don't worry～.\nDo your best next time too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah... I have to try much harder!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
